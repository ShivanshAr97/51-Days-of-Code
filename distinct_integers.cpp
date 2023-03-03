#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {    
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    
    unordered_set<int> val;
    for(int i=0;i<5;i++){
        val.insert(arr[i]);
    }
    cout<<val.size();
    return 0;
}