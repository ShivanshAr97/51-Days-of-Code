#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int res=min(d,a);
    d=max(d-a,0);
    d=max(d-b,0);
    res=res-d;
    cout<<res;
    
    return 0;
}