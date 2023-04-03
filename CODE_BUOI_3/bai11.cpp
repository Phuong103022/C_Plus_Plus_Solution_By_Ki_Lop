#include <bits/stdc++.h>
using namespace std;

// 7! = 1*2*3*4*5*6*7 (2,2^2(4),2(2*3))
// 1*2*3*4*5 => 1*3*2*2*10 (2*5)
// so lan xuat hien 2 > 5
int main()
{
    long long n;
    cin >> n;
    long long tong = 0;
    for (long long i = 5; i <= n; i *= 5)
    {
        tong += n / i;
    }
    cout << tong << endl;
}