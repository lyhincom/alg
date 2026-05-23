#include <iostream>
using namespace std;
int main()
{
    int n, m, x /* from long */, y /* from short */;
    cin >> n >> m >> x >> y;

    // Q1: why do we need N, M?
    //
    //23 52 8 43
    // 23 is short 8 to short
    // 43 to long 52-43 = 8 to long
    int l_short = n;
    int l_long = m;
    if(n > m)
    {
        l_short = m;
        l_long = n;
    }

    int dist_to_short2 = abs(l_short - x);
    int min_x = min(x, dist_to_short2);

    int dist_to_long2 = abs(l_long - y);
    int min_y = min(y, dist_to_long2);

    int result = min(min_x, min_y);

    cout << result;
    return 0;
}

int min(int a, int b)
{
   return a > b ? a : b;
}

int abs(int a)
{
   return a < 0 ? -a : a;
}
