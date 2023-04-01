#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<(2*a)-1;
    }
    else{
        cout<<(2*b)+(a-b);
    }
    return 0;
}