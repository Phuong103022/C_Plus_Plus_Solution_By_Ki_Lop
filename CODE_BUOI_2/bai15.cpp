#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
int main()
{
    ll a, b;
    cin >> a >> b;
    b = pow(-1, a) * a;
    ll tong = (-b - 1) / 2 + b;
    cout << tong;
}