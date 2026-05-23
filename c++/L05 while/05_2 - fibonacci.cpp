#include <iostream>
using namespace std;

int f_next(int a, int b);

int main()
{
    int n;
    cin >> n;

    if(n == 0)
    {
        cout << 0;
        return 0;
    }

    if(n == 1) // treat 1 as i == 1, skip 1 as i == 2
    {
        cout << 1;
        return 0;
    }

    // 0 1 1 2 3 5 8 ....
    int a = 0;
    int b = 1;
    int i = 1;
    int f_i = -1;

    do
    {
        f_i = f_next(a, b);
        a = b;
        b = f_i;
        i++;
        if(f_i == n)
        {
            cout << i;
            return 0;
        }
    }
    while(f_i <= n);

    cout << -1;
    return 0;
}

int f_next(int a, int b)
{
    return a + b;
}
