#include <bits/stdc++.h>
using namespace std;
bool ngto(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return n > 1;
}

bool hoanhao(long long n)
{
    for (int i = 1; i <= 32; i++)
    {
        if (ngto(i))
        {
            long long tmp = pow(2, i) - 1;
            if (ngto(tmp))
            {
                long long res = tmp * pow(2, i - 1);
                if (res == n)
                    return true;
            }
        }
    }
    return false;
}

int main()
{
    long long n;
    cin >> n;
    if (hoanhao(n))
        cout << "YES";
    else
        cout << "NO";
}