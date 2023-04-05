#include <bits/stdc++.h>
using namespace std;

bool nguyen_to(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return n > 1;
}

int tong_chu_so(int n)
{
    int tong = 0;
    while (n)
    {
        tong += n % 10;
        n /= 10;
    }
    return tong;
}

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
    for (int i = 0; i <= n; i++)
    {
        if (fibo(tong_chu_so(i)) && nguyen_to(i))
            cout << i << ' ';
    }
}