#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    // 4 2 1
    if(a > b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    // |2 4| 1
    if(b > c)
    {
        b = b + c;
        c = b - c;
        b = b - c;
    }
    // 2 |1 4|
    if(a > b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    // |1 2| 4

    cout << a << " " << b << " " << c;
    return 0;
}

