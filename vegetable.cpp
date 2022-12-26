#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int a,b;
    cin>>a>>b;
    if ((b-2*a)>=0 && (4*a-b)>=0 && (b-2*a)%2==0 && (4*a-b)%2==0) {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}