#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int max_1 = a[0], max_2 = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max_1)
        {
            max_2 = max_1;
            max_1 = a[i];
        }
        else if (a[i] > max_2)
        {
            max_2 = a[i];
        }
    }
    cout << max_1 << " " << max_2;
}