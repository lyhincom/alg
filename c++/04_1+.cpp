#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    // 0⩽a,b,c,d⩽100
    // a⩽b
    // c⩽d

    // a b c d NO
    // a c b d YES
    // a c d b YES
    // c d a b NO
    // c a d b YES
    // c a b d YES

    cin >> a >> b >> c >> d;

    // 1 3 2 4 YES
    // 1 2 3 4 NO
    // 1 2 2 4 YES

    if ((a <= c && c <= b && b <= d) ||
        (a <= c && c <= d && d <= b) ||
        (c <= a && a <= d && d <= b) ||
        (c <= a && a <= b && b <= d)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
