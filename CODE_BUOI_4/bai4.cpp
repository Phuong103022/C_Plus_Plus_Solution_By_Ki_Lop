#include <bits/stdc++.h>
using namespace std;

bool kiemTraCp(long long n)
{
    int tmp = sqrt(n);
    if (1ll * tmp * tmp == n)
        return true;
    return false;
}

int main(){
    long long n;
    cin >> n;
    if (kiemTraCp(n))
    {
        cout << "YES";
    }
    else
        cout << "NO";
}