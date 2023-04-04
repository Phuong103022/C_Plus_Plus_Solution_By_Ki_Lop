#include <bits/stdc++.h>
using namespace std;

bool thuaSo(long long n)
{
    long long tich = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            int dem = 0;
            while (n % i == 0)
            {
                dem++;
                n /= i;
            }
            tich *= (dem + 1);
        }
    }
    if (n != 1)
        tich *= 2;
    return tich % 2 == 1;
}

int main()
{
    long long n;
    cin >> n;
    if (thuaSo(n))
        cout << "YES";
    else
        cout << "NO";
}