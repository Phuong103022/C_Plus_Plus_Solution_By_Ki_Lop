#include <bits/stdc++.h>
using namespace std;
const int MOD = (int)1e9;

int main()
{
    vector<int> v;
    int n, k, x;
    cin >> n >> x >> k;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    v.insert(v.begin() + k - 1, x);
    for (auto item : v)
    {
        cout << item << ' ';
    }
}