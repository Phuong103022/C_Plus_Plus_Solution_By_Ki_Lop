#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    int dem = 0;
    while (n)
    {
        dem++;
        n /= 10;
    }
    cout << dem;
}