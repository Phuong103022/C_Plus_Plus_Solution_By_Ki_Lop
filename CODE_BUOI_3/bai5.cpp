#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int kiemTra = 0;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        if (n == 2022)
            kiemTra = 1;
    }
    if (kiemTra == 1)
        cout << "YES";
    else
        cout << "NO";
}