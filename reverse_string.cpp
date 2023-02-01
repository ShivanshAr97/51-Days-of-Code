#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a, b;
    string s;
    cin >> a >> b >> s;
    for (int i = 0; i < s.size(); i++)
    {
        while (a <= b)
        {
            swap(s[a-1], s[b-1]);
            a++;
            b--;
        }
    }
    cout << s;

    return 0;
}