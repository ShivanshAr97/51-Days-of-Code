#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long n, k, x;
    cin >> n >> k >> x;

    vector<long long> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    long ans = 0;
    long curr = 0;

    for (auto &i : a)
    {
        long req = i / x;
        long rem = i % x;

        if (k >= req)
        {
            i = rem;
            k -= req;
        }
        else
        {
            if (k != 0)
            {
                i -= k * x;
                k = 0;
            }
            else
            {
                break;
            }
        }
    }

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    long long sum = 0;
    for (int i = k; i < n; i++)
    {
        sum += a[i];
    }

    cout << sum << endl;
};

int main()
{
    solve();
    return 0;
}