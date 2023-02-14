#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if(n==(i*j)){
                cout<<"Yes";
                return 0;
            }
            else{
                s="No";
            }
        }
    }
    cout<<s;
    
    return 0;
}