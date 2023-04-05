#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    ll f1 = 0, f2 = 1;
    ll fn = 0;
    for (int i = 2; i < n; i++)
    {
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
    }
    cout << fn << ' ';
}