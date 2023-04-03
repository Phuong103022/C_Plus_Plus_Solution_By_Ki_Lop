#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    int a, b, k;
    cin >> a >> b >> k;
    if (k % 2 == 0)
    {
        cout << 1ll * (k / 2) * a - 1ll * (k / 2) * b;
    }
    else
        cout << 1ll * (k / 2 + 1) * a - 1ll * (k / 2) * b;
}