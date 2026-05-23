#include <iostream>
using namespace std;
int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    // 2 4
    // 3 2
    // x x x x
    // x x v x
    // x x x x
    // x v x x

    if((x1 + 2 == x2 && y1 - 1 == y2) ||
       (x1 + 2 == x2 && y1 + 1 == y2)
       ||
       (x1 - 2 == x2 && y1 - 1 == y2) ||
       (x1 - 2 == x2 && y1 + 1 == y2)
       ||
       (x1 + 1 == x2 && y1 - 2 == y2) ||
       (x1 + 1 == x2 && y1 + 2 == y2)
       ||
       (x1 - 1 == x2 && y1 - 2 == y2) ||
       (x1 - 1 == x2 && y1 + 2 == y2)) { // abs
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
