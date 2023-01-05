// 1/1/2023

#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    double ans = 0;
    double arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        double res = 1 / arr[i];
        ans += res;
    }
    cout << fixed << setprecision(8) << 1/ans;

    return 0;
}