#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a;
    string b;
    cin>>a>>b;
    for (int i = 0; i < b.size(); i++)
    {
        if(b[i]+a>90){
            cout<<char(b[i]+a-26);
        }
        else{
            cout<<char(b[i]+a);
        }
    }
    
    return 0;
}