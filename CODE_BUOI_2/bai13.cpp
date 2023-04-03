#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    int n;
    cin >> n;
    double tong = 0;
    for (int i = 1; i <= n; i++)
    {
        tong += 1.0 / (1.0 * i * (i + 1));
    }
    cout << fixed << setprecision(4) << tong << endl;
}