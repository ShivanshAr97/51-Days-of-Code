#include <iostream>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;

    if (a == 0)
    {
        cout << 1;
    }

    if (b == 0)
    {
        cout << 2;
    }

    else
    {
        cout << a + 2 * b + 1;
    }

    return 0;
}