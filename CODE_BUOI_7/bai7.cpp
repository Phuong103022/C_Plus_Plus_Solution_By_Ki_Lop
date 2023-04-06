#include "bits/stdc++.h"
using namespace std;
const int MOD = 1e9 + 7;
using ll = long long;
bool prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return n > 1;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (1ll * a[0] * a[1] < 0)
        cout << a[0] << ' ';
    for (int i = 1; i < n; i++)
    {
        if (1ll * a[i] * a[i - 1] < 0)
        {
            cout << a[i] << ' ';
        }
        else if (i != n - 1 && 1ll * a[i] * a[i + 1] < 0)
        {
            cout << a[i] << ' ';
        }
    }
}