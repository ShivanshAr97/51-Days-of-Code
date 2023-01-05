// 14/12/2022

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int arr[m];
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        cin>>arr[i];
        count+=arr[i];
    }
    if(n-count>0)
        cout<<n-count;
    else{
        cout<<-1;
    }

    return 0;
}
