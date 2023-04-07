#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool check(int n)
{
    int last = n % 10;
    while (n)
    {
        if (last < n % 10)
            return false;
        n /= 10;
    }
    return true;
}
bool prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return n > 1;
}
int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (check(i) && prime(i))
            cnt++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (check(i) && prime(i))
            cout << i << ' ';
    }
    cout << endl
         << cnt;
}