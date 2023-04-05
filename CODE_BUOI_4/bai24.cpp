#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll x;
    cin >> x;
    ll f1 = 0, f2 = 1;
    ll fn = 0;
    int ok = 0;
    for (int i = 2; i <= 92; i++)
    {
        fn = f1 + f2;
        if (fn == x)
        {
            cout << "YES" << endl;
            ok = 1;
            break;
        }
        f1 = f2;
        f2 = fn;
    }
    if (ok == 0)
        cout << "NO" << endl;
}