#include <iostream>
#include <cmath>
using namespace std;

int my_sqrt(int n);

int main()
{
    int n;
    cin >> n;

    int n_sqrt = my_sqrt(n) + 1;
    int i = 2;
    while (i < n_sqrt)
    {
        if(n % i == 0)
        {
            cout << i;
            return 0;
        }

        i++;
    }

    cout << n;
    return 0;
}

int my_sqrt(int n)
{
    int i = 1;
    while(i * i < n)
    {
        i++;
        if(i > 44721) // sqr of 2 * 10^9
        {
            cout << "overflow error";
        }
    }

    return i;
}
