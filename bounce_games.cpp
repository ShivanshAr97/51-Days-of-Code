#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main()
{
    int n, x;
    int l[100];
    int arr[100];
    arr[0] = 0;
    cin >> n;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> l[i];
    }
    for (int i = 1; i <= n; i++)
    {
        arr[i] = arr[i - 1] + l[i - 1];
        if (arr[i] > x)
        {
            cout << i;
            return 0;
        }
    }
    cout << n + 1;
    return 0;
}