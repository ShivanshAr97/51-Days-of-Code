#include <bits/stdc++.h>

using namespace std;
int main()
{
    long a,b;
    cin>>a>>b;
    long c;
    if(b%2==0){
        c=a/b;
        long d = (a+(b/2))/b;
        cout<<c*c*c+d*d*d<<" ";
    }
    else{
        c=a/b;
        cout<<c*c*c;
    }
    return 0;
}