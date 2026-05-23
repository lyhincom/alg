#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while(!(n % 13 == 0))
    {
        cout << n << endl;
        n++;
    }

    return 0;
}
