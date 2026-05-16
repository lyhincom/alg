#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(a == b && b == c && a == c)
    {
        cout << 3;
        return 0;
    }

    if(a != b && b != c && a != c)
    {
        cout << 0;
        return 0;
    }

    if(a == b && b != c && a != c ||
       a != b && b == c && a != c ||
       a != b && b != c && a == c)
    {
        cout << 2;
        return 0;
    }

    cout << 100;
    return 0;
}
