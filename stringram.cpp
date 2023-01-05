// 4/1/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;
    map<string, long> mp;
    while (n--)
    {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        mp[s]++;
    }
    long count = 0;
    for (auto &i : mp)
    {
        count = count + ((i.second * (i.second - 1)) / 2);
    }
    cout << count;
}