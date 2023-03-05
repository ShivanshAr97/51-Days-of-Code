#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int a,b;
    cin>>a>>b;
    int ans = b-a+1;
    if(ans>0){
        cout<<ans ;
    }
    else{
        cout<<0;
    }
    return 0;
}