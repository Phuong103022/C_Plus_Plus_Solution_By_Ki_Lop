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
    for (int i = 0; i < n; i++)
    {
        if (prime(a[i]))
            dem++;
    }
    if (dem == 0)
        cout << "NONE";
    else
        cout << dem;
}