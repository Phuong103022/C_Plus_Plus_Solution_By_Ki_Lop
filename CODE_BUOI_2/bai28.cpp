#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    int a1, a2, a3, b1, b2, b3, n;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;
    int tongSoCup = a1 + a2 + a3;
    int tongSoHuyChuong = b1 + b2 + b3;
    int soKe = 0;
    if (tongSoCup % 5 == 0)
    {
        soKe += tongSoCup / 5;
    }
    else
        soKe += tongSoCup / 5 + 1;
    if (tongSoHuyChuong % 10 == 0)
    {
        soKe += tongSoHuyChuong / 10;
    }
    else
        soKe += tongSoHuyChuong / 10 + 1;
    if (soKe <= n)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}