#include <bits/stdc++.h>
using namespace std;

bool kiemTra(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) return false;
    }
    return n > 1; // n > 1 tra ve true nguoc lai tra ve false.
}
bool kiemTraChuSo(int n)
{
    int tong = 0;
    while(n) // while(0) == while(false)
    {
        tong += n % 10;
        if (n % 10 != 2 && n % 10 != 3 && n % 10 != 5 && n % 10 != 7)
        {
            return false;
        }
        n /= 10; // n giam dan ve 0.
    }
    return kiemTra(tong);
}
int main(){
    int a, b;
    cin >> a >> b;
    int dem = 0;
    for (int i = a; i <= b; i++)
    {
        if (kiemTraChuSo(i) && kiemTra(i))
            dem++;
    }
    cout << dem << endl;
}