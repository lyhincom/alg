#include <iostream>
using namespace std;

int main()
{
    int x, p, y;
    cin >> x >> p >> y;
    int i = 0;

    int x_cents = x * 100;
    int y_cents = y * 100;

    while(x_cents < y_cents)
    {
        x_cents = x_cents + x_cents * p / 100;
        // no need: x_cents = std__floor(x * 100) / 100;
        i++;
    }

    cout << i;
    return 0;
}
