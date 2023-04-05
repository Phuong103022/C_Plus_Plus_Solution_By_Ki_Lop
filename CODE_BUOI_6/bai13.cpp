
#include <bits/stdc++.h>
    using namespace std;
using ll = long long;
const int maxn = 1e7 + 1;
ll lengdre(ll n, ll p) // so lan xuat hien cua 1 thua so nguyen to.
{
    ll res = 0;
    for (ll i = p; i <= n; i *= p)
    {
        res += n / i;
        res %= 1000000007;
    }
    return res;
}
bool ktraNgto(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return n > 1;
}
void phanTich(int n)
{
    ll res = 1;
    for (int i = 2; i <= n; i++)
    {
        if (ktraNgto(i))
        {
            res *= (lengdre(n, i) + 1);
            res %= 1000000007;
        }
    }
    cout << res;
}

int main()
{
    int n;
    cin >> n;
    phanTich(n);
}