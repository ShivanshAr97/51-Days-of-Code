#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int n = 0;
    while(a>0){
        a=a/b;
        n++;
    }
    cout<<n;
    return 0;
}