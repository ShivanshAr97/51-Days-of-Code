#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int a;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    arr[n] = arr[n-1];
    sort(arr,arr+n);
    double ans = arr[0]+arr[1];
    for (int i = 2; i < n; i++)
    {
        ans = ans/2+arr[i];
    }
    cout<<fixed<<setprecision(8)<<ans/2;
    
    return 0;
}