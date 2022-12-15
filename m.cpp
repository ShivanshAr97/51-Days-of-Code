#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long long int n,r,k;
    cin>>n>>k;
    vector<int> v;
    
   
    for(int i = 0; i<n ; i++)
    {
        cin>>r;
        v.push_back(r);
    }
    if (n==1)
    {
        cout<<abs(v[0])<<endl;
        return 0;
    }
 long long int l = 0 , h = k-1, s , ms=INT_MAX ;
    while(h<n)
    {
         s = v[h] - v[l];
         if(v[h]<0 && v[l]<0) s += abs(v[h]);
         else if(abs(v[l]) > abs(v[h])) s += abs(v[h]);
         else s += abs(v[l]);
         ms = min(ms,s);
         l++;
         h++;
    }
    cout<<ms<<endl;
    return 0;
}