#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    int t, n;
    cin >> t >> n;
    if (t <= 0 || n <= 0 || t < 1 || t > 12)
    {
        cout << "INVALID";
    }
    else
    {
        if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
        {
            switch (t)
            {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                cout << "31";
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                cout << "30";
            case 2:
                cout << "29";
            default:
                break;
            }
        }
        else
        {
            switch (t)
            {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                cout << "31";
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                cout << "30";
            case 2:
                cout << "28";
            default:
                break;
            }
        }
    }
}