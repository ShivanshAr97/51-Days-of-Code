#include <bits/stdc++.h>

using namespace std;
int main()
{
    long a;
    cin >> a;
    long i = 0;
    long res[64];
    while (a > 0)
    {
        res[i] = a % 2;
        a = a / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << 2*res[j];
    }

    return 0;
}