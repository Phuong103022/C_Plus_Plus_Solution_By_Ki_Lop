#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    char c;
    // Trong bang ma ACII xem de lam:
    cin >> c;
    if ('a' <= c && c <= 'z')
    {
        cout << "LOWER";
    }
    else if ('A' <= c && c <= 'Z')
    {
        cout << "UPPER";
    }
    else if ('0' <= c && c <= '9')
    {
        cout << "DIGIT";
    }
    else
        cout << "SPECIAL";
}