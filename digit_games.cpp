#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        int digit = n % 10;
        arr[i] = digit;
        n = n / 10;
    }
    cout << ((arr[2] * 100) + (arr[1] * 10) + arr[0]) + ((arr[1] * 100) + (arr[0] * 10) + arr[2]) + ((arr[0] * 100) + (arr[2] * 10) + arr[1]);
    return 0;
}