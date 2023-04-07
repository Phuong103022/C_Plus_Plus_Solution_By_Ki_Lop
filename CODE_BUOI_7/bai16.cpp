#include <bits/stdc++.h>
using namespace std;
int p[(int)1e7 + 1];

void sang()
{
    for (int i = 0; i < (int)1e7 + 1; i++)
        p[i] = 1;
    p[0] = p[1] = 0;
    for (int i = 2; i <= sqrt((int)1e7 + 1); i++)
    {
        for (int j = i * i; j < (int)1e7 + 1; j += i)
        {
            if (p[j] == 1)
                p[j] = 0;
        }
    }
}

int main()
{
    sang();
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        if (p[i] == 1)
            cout << i << ' ';
    }
}