#include <bits/stdc++.h>
using namespace std;

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
}