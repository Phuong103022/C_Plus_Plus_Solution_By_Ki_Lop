#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long sum;
    sum = 0;
    for (long long i = 1; i <= n; i++)
    {
        sum += i * 2;
    }
    cout << sum;
}