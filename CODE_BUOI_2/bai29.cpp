#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max({a, b, c, d}) << ' ' << min({a, b, c, d});
}