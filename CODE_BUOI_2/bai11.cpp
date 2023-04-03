#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    int n;
    cin >> n;
    ll tong = 0;
    for (int i = 1; i <= n; i++)
    {
        tong += i;
    }
    cout << tong << endl;
}