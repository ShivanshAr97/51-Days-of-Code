#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a * b >= 0 && a >= 0)
    {
        if (b > a)
        {
            cout << a;
        }
        else if (c > b && a > b)
        {
            cout << -1;
        }
        else if (c < b)
        {
            cout << a;
        }
    }
    else if (a * b >= 0 && a <= 0 && b <= 0)
    {
        if (a > b || (a < b && c <= 0 && b < c))
        {
            cout << abs(a);
        }
        else if (a < b && b < c)
        {
            cout << (2 * c) - a;
        }
        else if (b > a)
        {
            cout << -1;
        }
    }
    else if (a * b <= 0 && a >= 0)
    {
        cout << a;
    }
    else if (a * b <= 0 && c >= 0)
    {
        cout << abs(a);
    }
    else
    {
        cout << -1;
    }
    return 0;
}