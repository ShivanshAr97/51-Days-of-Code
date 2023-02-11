#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    string s;
    for (int i = 0; i < k; i++)
    {

        if (n % 200 == 0)
        {
            n = n / 200;
        }
        else
        {
            s = to_string(n);
            s = s + "200";
            n = stoll(s);
        }
    }
    cout << n;
    return 0;
}