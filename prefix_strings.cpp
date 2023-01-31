#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	string a,b;
    string c="";
    cin>>a>>b;
    for (int i=0;i<a.size ();i++){
        if(a[i]==b[i]){
            c="Yes";
        }
        else {
            c="No";
        }
    }
    cout<<c;
    return 0;
}