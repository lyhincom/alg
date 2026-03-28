#include <iostream>
using namespace std;
int main()
{
    int v, t;
    cin >> v >> t;

    // 109
    // [-1000, 1000]

    cout << (1000 * 109 + v * t) % 109 << endl;

    // 60 2
    // 11

    // -1 1
    // 108
    return 0;
}
