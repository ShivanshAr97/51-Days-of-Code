#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int n;
    cin>>n;
    string arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    unordered_set<string> val;
    for(int i=0; i<n;i++){
        val.insert(arr[i]);
    }
    cout<<val.size();
    return 0;
}