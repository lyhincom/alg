#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> b >> a;

    int d = (a % b + b) % b;
    int c = (a - d) / b;
    // cout << d << endl;
    // cout << c << endl;

    int ceil = (b + d - 1) / b;

    cout << c + ceil << endl;
    return 0;
}
