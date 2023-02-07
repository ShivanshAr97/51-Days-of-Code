#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[4000010];
    for (int i = 0; i < 4 * n - 1; i++)
    {
        cin >> arr[i];
    }
    unordered_map<int, int> mp;
    for (int i = 0; i < 4 * n - 1; i++)
    {
        mp[arr[i]]++;
    }
    for (auto it : mp)
    {
        if (it.second % 4 != 0)
        {
            cout << it.first;
        }
    }

    return 0;
}