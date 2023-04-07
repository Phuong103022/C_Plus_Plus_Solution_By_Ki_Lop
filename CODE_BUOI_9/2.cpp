#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 1e7 + 1;

void interChangeSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // gia xu vi tri dau tien la vi tri min
        int vitrimin = i;
        int kiemTra = 0;

        for (int j = i + 1; j < n; j++)
        {
            if (a[vitrimin] > a[j])
            {
                swap(a[vitrimin], a[j]);
                kiemTra = 1;
            } // vi tri min thuc su
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
    interChangeSort(a, n);
}