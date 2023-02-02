#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long int a,b;
    cin>>a>>b;
    if(a<b){
        swap(a,b);
    }
    while(b>0){
        if((a%10)+(b%10)>9){
            cout<<"Hard";
            return 0;
        }
        a=a/10;
        b=b/10;
    }
    cout<<"Easy";
    return 0;
}