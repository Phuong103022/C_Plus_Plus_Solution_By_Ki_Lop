#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) // thoa man la 1 tam giac:
    {
        if (a == b && b == c)
        {
            cout << "1";
        }
        else if (a == b || b == c || a == c)
        {
            cout << "2";
        }
        else if (1ll * a * a + 1ll * b * b == 1ll * c * c || 1ll * a * a + 1ll * c * c == 1ll * b * b || 1ll * b * b + 1ll * c * c == 1ll * a * a)
        {
            cout << "3";
        }
        else
            cout << "4";
    }
    else
        cout << "INVALID";
}