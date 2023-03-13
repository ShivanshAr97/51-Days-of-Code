#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	string s;
    cin>> s;
    if(s.length()==1){
        cout<<s<<s<<s<<s<<s<<s;
    }
    else if(s.length()==2){
        cout<<s<<s<<s;
    }
    else{
        cout<<s<<s;
    }
    return 0;
}