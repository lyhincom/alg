#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a = n / 1000;
    int b = ( n - 1000 * a ) / 100;
    int c = ( n - 1000 * a - 100 * b ) / 10;
    int d = n - 1000 * a - 100 * b - 10 * c;

    // cout << "a=" << a << "; b=" << b << "; c=" << c << "; d=" << d << endl;
    // cout << "d-a=" << (d - a) << "; c-b=" << (c - b) << endl;
    cout << (d - a) * 100 + (c - b) * 10 + 1 << endl;


    return 0;
}

