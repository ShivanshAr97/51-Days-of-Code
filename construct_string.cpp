#include <bits/stdc++.h>

using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(includes(b.begin(),b.end(),a.begin(),a.end())){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}