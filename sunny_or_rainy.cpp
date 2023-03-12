#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main()
{
    string s;
    int n;
    cin >> n;
    cin >> s;
    if (s[n-1] == 'x')
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }

    return 0;
}