#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	string s;
    cin>>s;
    int cnt1=0;
    int cnt2=0;
    for(int i=0; i<s.size();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            cnt1++;
        }
        else{
            cnt2++;
        }
    }
    if(cnt1==cnt2){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}