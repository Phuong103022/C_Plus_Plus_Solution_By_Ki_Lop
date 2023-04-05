#include <bits/stdc++.h>
using namespace std;
<<<<<<< HEAD
using ll = long long;
=======

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

>>>>>>> b33c83f9d2de299ac65bafe2b19d498bbd5f2e01
int main()
{
    int n;
    cin >> n;
<<<<<<< HEAD
    ll f1 = 0, f2 = 1;
    ll fn = 0;
    for (int i = 2; i < n; i++)
    {
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
    }
    cout << fn << ' ';
=======
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
>>>>>>> b33c83f9d2de299ac65bafe2b19d498bbd5f2e01
}