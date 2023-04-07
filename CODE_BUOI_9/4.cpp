#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 1e7 + 1;

void bubbleSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int kiemTra = 0;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                kiemTra = 1;
                swap(a[j], a[j + 1]);
            }
        }
        if (kiemTra == 0 && i == n - 1)
            return;
        cout << "Buoc " << i + 1 << ": ";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << ' ';
        }
        cout << endl;
    }
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
    bubbleSort(a, n);
}