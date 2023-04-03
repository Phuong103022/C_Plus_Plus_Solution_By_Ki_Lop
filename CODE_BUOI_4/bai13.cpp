#include <bits/stdc++.h>
using namespace std;


bool tn(int n)
{
    int tmp = n;
    int tong = 0;
    while (n)
    {
        tong = tong * 10 + n % 10;
        n /= 10; // n giam ve 0
    }
    return tong == tmp; // tra ve true hoac false;
}

bool thuaso(int n)
{
    int uoc = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
            }
            uoc++;
        }
    }
    if (n != 1)
        uoc++;
    return uoc >= 3;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int ok = 0;
    for (int i = a; i <= b; i++)
    {
        if (tn(i) && thuaso(i))
        {
            cout << i << ' ';
            ok = 1;
        }
    }
    if (ok == 0)
        cout << -1;
}