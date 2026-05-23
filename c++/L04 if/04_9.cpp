#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n % 100 >= 11 && n % 100 <= 19)
    {
        cout << n << " bochek" << endl;
        return 0;
    }

    if(n % 10 == 1)
    {
        cout << n << " bochka" << endl;
        return 0;
    }

    if(n % 10 == 2 || n % 10 == 3 || n % 10 == 4)
    {
        cout << n << " bochki" << endl;
        return 0;
    }

    cout << n << " bochek" << endl;
    return 0;
}
