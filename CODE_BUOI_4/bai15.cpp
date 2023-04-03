#include <bits/stdc++.h>
using namespace std;

bool sphenic(long long n)
{
    int res = 0; // result; ans; tmp; cnt (count)
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            res++;
            int cnt = 0;
            while(n % i == 0)
            {
                cnt++;
                n /= i;
            }
            if (cnt > 1)
                return false;
        }
    }
    if (n != 1)
        res++;
    return res == 3;
}


int main() {
    long long n;
    cin >> n;
    if (sphenic(n))
        cout << "YES";
    else
        cout << "NO";
}