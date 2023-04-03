#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a, b;
    cin >> a >> b;
    cout << a + b << "\n"
         << a - b << "\n"
         << 1ll * a * b << "\n"
         << fixed << setprecision(2) << 1.0 * a / b;
}