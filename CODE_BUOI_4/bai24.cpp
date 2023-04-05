#include <bits/stdc++.h>
using namespace std;
<<<<<<< HEAD
using ll = long long;
int main()
{
    ll x;
    cin >> x;
    ll f1 = 0, f2 = 1;
    ll fn = 0;
    int ok = 0;
    for (int i = 2; i <= 92; i++)
    {
        fn = f1 + f2;
        if (fn == x)
        {
            cout << "YES" << endl;
            ok = 1;
            break;
        }
        f1 = f2;
        f2 = fn;
    }
    if (ok == 0)
        cout << "NO" << endl;
=======

bool fibo(long long n)
{
    if (n == 1 || n == 0)
    {
        return true;
    }
    else
    {
        long long f1 = 0, f2 = 1, fn;
        for (int i = 3; i <= 93; i++)
        {
            fn = f1 + f2;
            if (fn == n)
                return true;
            f1 = f2;
            f2 = fn;
        }
    }
    return false;
}

int main()
{
    long long n;
    cin >> n;
    if (fibo(n))
        cout << "YES";
    else
        cout << "NO";
>>>>>>> b33c83f9d2de299ac65bafe2b19d498bbd5f2e01
}