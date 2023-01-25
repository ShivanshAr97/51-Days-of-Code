#include <bits/stdc++.h>

using namespace std;
int main()
{
    long a, b, c;
    cin >> a >> b >> c;
    long cnt = 0;
    while (a < b)
    {
        cnt++;
        a = a * c;
    }
    cout <<cnt;

    return 0;
}