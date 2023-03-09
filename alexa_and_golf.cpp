#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int n,a,b;
    cin>>n>>a>>b;
    string ans;
    for(int i=a;i<=b;i++){
        if(i%n==0){
            cout<<"OK";
            return 0;
        }
        else{
            ans="NG";
        }
    }
    cout<<ans;
    return 0;
}