#include <bits/stdc++.h>
using namespace std;

// 7! = 1*2*3*4*5*6*7 (2,2^2(4),2(2*3))


int main()
{
    long long n;
    int p;
    cin >> n >> p;
    long long tong = 0;
    for (long long i = p; i <= n; i *= p)
    {
        tong += n / i;
    }
    cout << tong << endl;
}