#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main(){
	string s;
    cin>>s;
    int n=s.size()-1;
    if(s[n]=='r'&& s[n-1]=='e'){
        cout<<"er";
    }
    else {
        cout<<"ist";
    }
    return 0;
}