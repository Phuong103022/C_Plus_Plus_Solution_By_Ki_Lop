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
    int max_val = INT_MIN, idx;
    for (int i = 0; i < n; i++)
    {
        if (cnt[a[i]] > max_val)
        {
            max_val = cnt[a[i]];
            idx = a[i];
            cnt[a[i]] = 0;
        }
    }
    cout << idx << ' ' << max_val;
}