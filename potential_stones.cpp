#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int k,x;
    cin>>k>>x;
    for(int i=x-k+1;i<x;i++){
        cout<<i<<" ";
    }
    cout<<x<<" ";
    for(int i=1;i<k;i++){
        cout<<x+i<<" ";
    }
    return 0;
}