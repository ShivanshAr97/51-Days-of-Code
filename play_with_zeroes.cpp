#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans = n;
    int i=0;
    if(n==0){
        cout<<"0000";
        return 0;
    }
    while(n>0){
        n=n/10;
        i++;
    }
    int res=4-i;
    for (int j = 0; j < res; j++)
    {
        cout<<0;
    }
    cout<<ans;
    
    return 0;
}