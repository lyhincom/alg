#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    if((a <= d && b <= e) || (b <= d && a <= e))
    {
        cout << "YES";
        return 0;
    }

    if((a <= d && c <= e) || (c <= d && a <= e))
    {
        cout << "YES";
        return 0;
    }

    if((b <= d && c <= e) || (c <= d && b <= e))
    {
        cout << "YES";
        return 0;
    }

    cout << "NO";
    return 0;
}
