#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 1e7 + 1;

ll lengdre(ll n, ll p)
{
    ll res = 0;
    for(ll i = p; i <= n; i *= p){
        res += n / i;
    }
    return res;
}


int main(){
    ll n, p;
    cin >> n >> p;
    cout << lengdre(n, p);
}