#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 1e7 + 1;

void insertionSort(int a[], int n)
{
    cout << "Buoc " << 1 << ": ";
    for (int j = 0; j < n; j++)
    {
        cout << a[j] << ' ';
    }
    cout << endl;
    for (int i = 1; i < n; i++)
    {
        int pos = i - 1, x = a[i];

        while (pos >= 0 && a[pos] > x)
        {
            a[pos + 1] = a[pos]; // nhay len 1 buoc;
            pos--;               // lui ve de kiem tra so tiep theo
        }
        // cout << endl;
        a[++pos] = x; // chen vao vi tri thoa man.
        cout << "Buoc " << i + 1 << ": ";
        for (int j = 0; j < n; j++)
        {
            cout << a[j] << ' ';
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
    insertionSort(a, n);
}