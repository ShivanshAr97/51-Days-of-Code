// 3/1/2023

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

static bool cmp(vector<int>&a,vector<int>&b){
    if(a[1]==b[1]){
        return a[0]<b[0];
    }
    return a[1]>b[1];
}

int main() {
  int n,m;
    cin>>n>>m;
    vector<vector<int>>res;
    while(n--){
        int a,b;
        cin>>a>>b;
        res.push_back({a,b});
    }
    set<int>st;
    for(int i=0;i<=m;i++){
        st.insert(i);
    }
    sort(res.begin(),res.end(),cmp);
    int ans=0;
    for(int i=0;i<res.size();i++){
        if((res[i][0])<=m){
            int tar= m-res[i][0];
            auto it= st.upper_bound(tar);
            if(it!=st.begin()){
                it= prev(it);
                st.erase(it);
                ans+=res[i][1];
            }
        }
    }
    cout<<ans<<"\n";
    return 0;
}