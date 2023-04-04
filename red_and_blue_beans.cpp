#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    long long int r,b,d;
    cin>>r>>b>>d;
    int ans = ceil(min(r,b)/(d+1));
	if(ans<=min(r,b)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}