#include <bits/stdc++.h>

using namespace std;
int main()
{
    int nums[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> nums[i];
    }

    unordered_map<int, int> mp;
    for (int i = 0; i < 5; i++)
    {
        mp[nums[i]]++;
    }
    for (auto it : mp)
    {
        if (it.second >= 2)
        {
            cout << "Yes";
            break;
        }
        else
        {
            cout << "No";
            return 0;
        }
    }

    return 0;
}