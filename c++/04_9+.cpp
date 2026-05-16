#include <iostream>
using namespace std;

int main()
{
    int a, b;
    // -30000 to 30000
    cin >> a >> b;

    if(a == 0 && b == 0)
    {
        cout << "INF";
        return 0;
    }

    if((a == 0 && b != 0) || (-b % a != 0))
    {
        cout << "NO";
        return 0;
    }

    cout << -b / a;
    return 0;
}
