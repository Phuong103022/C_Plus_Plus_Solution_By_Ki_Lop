#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    int tc = 0, tl = 0;
    while (n)
    {
        if (n % 10 % 2 == 0)
            tc += n % 10;
        else
            tl += n % 10;
        n /= 10;
    }
    cout << tc << ' ' << tl;
}