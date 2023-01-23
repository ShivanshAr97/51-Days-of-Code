#include <bits/stdc++.h>

using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int x = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == b[x])
        {
            x++;
        }
        else
        {
            x = 0;
        }
        if (x == b.length() - 1)
        {
            cout << "Yes";
            return 0;
        }
    }
    cout<<"No";

    return 0;
}