#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a,b;
    int cnt = 0;
    cin>>a>>b;
    for (int i = a+1; i < b; i++)
    {
        if(i%2 == 0){
            cout<<i<<" ";
            cnt++;
        }
        if (cnt==5)
        {
            break;
        }
        
    }
    
    
    return 0;
}