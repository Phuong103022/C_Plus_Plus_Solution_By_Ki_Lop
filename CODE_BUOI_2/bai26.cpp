#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int soTo = 0;
    if (n >= 100)
    {
        soTo += n / 100;
        n %= 100;
    }
    if (n >= 20)
    {
        soTo += n / 20;
        n %= 20;
    }
    if (n >= 10)
    {
        soTo += n / 10;
        n %= 10;
    }
    if (n >= 5)
    {
        soTo += n / 5;
        n %= 5;
    }
    if (n >= 1)
    {
        soTo += n / 1;
        n %= 1;
    }
    cout << soTo;
}