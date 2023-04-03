#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 1e7 + 1;

bool kiemTraNguyenTo(int n)
{
    for(int i = 2; i <= sqrt(n); i++){
        if (n % i == 0)
            return false;
    }
    return n > 1;
}


int main(){
    int n;
    cin >> n;
    if (kiemTraNguyenTo(n))
        cout << "YES";
    else
        cout << "NO";
}