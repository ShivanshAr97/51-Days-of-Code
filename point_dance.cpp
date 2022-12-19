#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,m , r;
    cin>>n>>m;
    vector<int>v;
    for(int i = 0; i<m ; i++)
    {
        cin>>r;
        v.push_back(r);
    }
    sort(v.begin() , v.end());
    vector<int> v1;
    v1.push_back(0);
    for(int i = 1 ; i<m ; i++) v1.push_back(abs(v[i-1] - v[i]));

    sort(v1.begin() , v1.end());
    int ans = 0;
    for(int i = 0; i<=m-n ; i++)
      ans += v1[i];
    cout<<ans<<endl;
    return 0;
}