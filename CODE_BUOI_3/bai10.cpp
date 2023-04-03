#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        cout << 1ll * ((1ll * i * i) * (1ll * i * i - 1)) / 2 - 4ll * (i - 1) * (i - 2) << endl;
    }
}