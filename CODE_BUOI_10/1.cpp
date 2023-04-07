#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, j, c) for (int intial = i; intial < j; intial += c)
#define INPUT(n) cin >> n
#define LIST() vector<auto> v
#define APPEND(v, x) v.push_back(x)
#define POP(v, x) v.pop_back(x)

bool cmp_tang(int a, int b)
{
    return a < b;
}

bool cmp_giam(int a, int b)
{
    return a > b;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, cmp_tang);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
    sort(a, a + n, cmp_giam);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
}