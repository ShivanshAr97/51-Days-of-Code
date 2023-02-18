#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int a,b,c;
    cin>>a>>b>>c;
    int d=a+b;
    int e=b+c;
    int f=a+c;
    int g=min(d,e);
    cout<<min(g,f);
    return 0;
}