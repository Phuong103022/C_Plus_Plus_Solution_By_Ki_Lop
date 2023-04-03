#include <bits/stdc++.h>
using namespace std;
#define ll long long

int prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return i;
    }
    return n;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << 1 << endl;
        }
        else if (i % 2 == 0)
        {
            cout << 2 << endl;
        }
        else
            cout << prime(i) << endl;
    }
}