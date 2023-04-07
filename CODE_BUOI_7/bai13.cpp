#include <bits/stdc++.h>
using namespace std;
int cnt[10000001];
int main()
{
    int n;
    cin >> n;
    int a[n], Max = 0;
    for (int &x : a)
    {
        cin >> x;
        Max = max(x, Max);
        cnt[x]++;
    }
    int max_val = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (cnt[a[i]] > max_val)
        {
            max_val = cnt[a[i]];
        }
    }
    for (int i = 0; i <= Max; i++)
    {
        if (max_val == cnt[i])
        {
            cout << i << ' ' << cnt[i];
            return 0;
        }
    }
}