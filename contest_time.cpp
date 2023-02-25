#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int n;
    cin>>n;
    if(n<60){
        cout<<"21:" << setw(2) << setfill('0')<<n;
    }
    else{
        
        cout<<"22:" << setw(2) << setfill('0')<<n-60;
    }
    return 0;
}