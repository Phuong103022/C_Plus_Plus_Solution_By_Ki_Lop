#include <bits/stdc++.h>
using namespace std;

int timViTriK(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
            return i;
    }
    return -1;
}

void xoaK(int a[], int &n, int x)
{
    int idx = timViTriK(a, n, x);
    if (idx != -1)
    {
        for (int i = timViTriK(a, n, x); i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        n--;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << ' ';
        }
    }
    else
        cout << "NOT FOUND";
}

int main()
{
    int n, x, k;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    xoaK(a, n, x);
}