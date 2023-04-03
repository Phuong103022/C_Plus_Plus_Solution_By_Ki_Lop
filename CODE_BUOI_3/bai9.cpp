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
        if (n % 10 == 2 || n % 10 == 3 || n % 10 == 5 || n % 10 == 7)
            dem++;
        n /= 10;
    }
    cout << dem;
}