#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int cnt[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << 0;
            return 0;
        }
        else
        {
            while (arr[i] % 2 == 0)
            {
                cnt[i]++;
                arr[i] = arr[i] / 2;
            }
        }
    }
    sort(cnt, cnt + n);
    cout << cnt[0];
    return 0;
}