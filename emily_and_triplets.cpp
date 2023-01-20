#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a,b;
    int cnt=0;
    cin>>a>>b;
    for (int x = 0; x <= a; x++)
    {
        for ( int y = 0; y <= a; y++)
        {
            for (int z = 0; z <= a; z++)
            {
                if(x+y+z <= a && x*y*z <= b){
                    cnt++;
                }
            }
        }
    }
        cout<<cnt<<" ";
    
    return 0;
}