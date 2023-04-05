#include <bits/stdc++.h>
using namespace std;

bool check(long long n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            int cnt = 0;
            while (n % i == 0) // uoc i bi trung da bi xoa
            {
                cnt++; // dem so lan bi trung
                n /= i;
            }
            if (cnt < 2)
                return false;
        }
    }
    if (n != 1)
        return false;
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
    long long n;
    cin >> n;
    for (int i = 0; i <= sqrt(n); i++)
    {
        if (prime(i))
            cout << 1ll * i * i << ' ';
    }
}