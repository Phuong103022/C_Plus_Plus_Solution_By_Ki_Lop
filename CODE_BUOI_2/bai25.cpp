#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 1e7 + 1;

int main()
{
    int n, m, a;
    cin >> n >> m >> a;
    int soHang = 0, soCot = 0;
    if (n % a == 0)
    {
        soHang = n / a;
    }
    else
        soHang = n / a + 1;
    if (m % a == 0)
    {
        soCot = m / a;
    }
    else
        soCot = m / a + 1;
    cout << 1ll * soHang * soCot << endl;
}