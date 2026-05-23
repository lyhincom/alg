#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    // 1
    // 1
    // 2
    // 2
    // YES

    // 1
    // 1
    // 2
    // 3
    // NO

    // b w
    // w b

    bool cell_1isBlack = (a - b) % 2;
    bool cell_2isBlack = (c - d) % 2;

    // cout << "cell_1isBlack: " << cell_1isBlack << endl;
    // cout << "cell_2isBlack: " << cell_2isBlack << endl;

    if(cell_1isBlack == cell_2isBlack) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
