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
    return n > 1; // > => true <1 => false;
}

int main()
{
    int n;
    cin >> n;
    if (n == 2 || n == 1)
        return --n;
    else
    {
        long long f0 = 0, f1 = 1, fn = 0;
        for (int i = 3; i <= n; i++)
        {
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
        }
        cout << fn;
    }
}