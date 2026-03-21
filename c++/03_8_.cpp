#include <iostream>
using namespace std;
int main()
{
    int k, n; // 50 100
    cin >> k >> n;
    // n = c * k + d

    int d = (n % k + k) % k;
    int c = (n - d) / k;
    // cout << "D:" << d << endl;
    // cout << "C:" << c << endl;

    int ceil_ = (k + d - 1) / k;
    // cout << "CEIL_:" << ceil_ << endl;

    cout << c + ceil_ << " " << d + (1 - ceil_) * k << endl;
    return 0;
}
