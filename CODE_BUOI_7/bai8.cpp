#include "bits/stdc++.h"
using namespace std;
const int MOD = 1e9 + 7;
using ll = long long;
void check(ll a[], ll n)
{
    cout << a[0] << ' ';
    int max_val = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max_val)
        {
            cout << a[i] << ' ';
            max_val = a[i];
        }
    }
}
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll &x : a)
        cin >> x;
    check(a, n);
}