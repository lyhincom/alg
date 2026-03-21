#include <iostream>
using namespace std;
int main()
{
    int n, m; // 3 4
    cin >> n >> m;

    int ifa = ((m + 1) % 2);
    int ifb = (m % 2);
    // cout << "ifa:" << ifa << endl;
    // cout << "ifb:" << ifb << endl;

    int c1 = (n + 1) % 2 * (n + 1) / 2 + (n + 0) % 2 * (n + 1) / 2;
    int c2 = (n + 1) % 2 * (n + 1) / 2 + (n + 0) % 2 * (n - 1) / 2;

    // cout << "C1:" << c1 << endl;
    // cout << "C2:" << c2 << endl;

    int m1 = (m / 2);
    int m2bl = (m / 2) + 1;
    int m2wh = (m / 2);
    // cout << "M1:" << m1 << endl;
    // cout << "M2:" << m2bl << endl;
    // cout << "M2:" << m2wh << endl;

    // cout << "(c1 + c2) * m1:" << (c1 + c2) * m1 << endl;
    // cout << "(c1 * m2bl + c2 * m2wh):" << (c1 * m2bl + c2 * m2wh) << endl;

    cout << ifa * (c1 + c2) * m1 + ifb * (c1 * m2bl + c2 * m2wh) << endl;
    return 0;
}

//1x1, 1 black
//x

//3x4, 6 black
//x o x o
//o x o x
//x o x o

//3x5, 8 black
//x o x o x
//o x o x o
//x o x o x

//3x6, 9 black 6?!
//x o x o x o
//o x o x o x
//x o x o x o

//4x4, 8 black
//x o x o
//o x o x
//x o x o
//o x o x
