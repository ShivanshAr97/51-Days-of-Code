#include <bits/stdc++.h>

using namespace std;

int clas(int a){
    return floor((a*(a-1))/2);
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<clas(a)+clas(b);
    return 0;
}