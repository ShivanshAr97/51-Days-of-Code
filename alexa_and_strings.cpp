#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    cin>>s;
    int res = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'a'){
            res=i+1;
        }
    }
    cout<<res;
    
    return 0;
}