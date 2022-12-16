#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    vector<int> col(m + 1, -1);
    vector<int> row(n + 1, -1);
    n = n + 1;
    vector<string> ans;

    vector<string> str;
    int ind = 0;
    while (n--)
    {
        string new_str;
        string c2;
        string c;
        getline(cin, c);
        for (auto x : c)
        {
            if (x == ' ')
                continue;
            else
            {
                new_str += x;
            }
        }
        str.push_back(new_str);
    }
    for (int i = 1; i < str.size(); ++i)
    {
        for (int j = 0; j < str[i].size(); ++j)
        {
            if (str[i][j] == '.' && col[j] != 0)
            {
                col[j] = -1;
            }
            else
            {
                col[j] = 0;
            }
        }
    }
    for (int i = 1; i < str.size(); ++i)
    {
        for (int j = 0; j < str[i].size(); ++j)
        {
            if (str[i][j] == '.')
            {

                if (row[i - 1] != 0)
                    row[i - 1] = -1;
            }
            else
            {
                row[i - 1] = 0;
            }
        }
    }
    for (int i = 1; i < str.size(); ++i)
    {
        string ns;
        for (int j = 0; j < str[i].size(); ++j)
        {
            if (row[i - 1] == 0 && col[j] == 0)
            {
                ns += (str[i][j]);
            }
        }
        if (ns == "")
        {
            continue;
        }
        else
            ans.push_back(ns);
        ns = "";
    }
    for (int i = 0; i < ans.size(); ++i)
    {
        for (int j = 0; j < ans[i].size(); ++j)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }
}