#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if (arr[i]>10){
            sum+=arr[i]-10;
        }
    }
    cout<<sum;
    return 0;
}