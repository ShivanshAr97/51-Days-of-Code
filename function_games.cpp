#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int x;
    cin>>x;
    int res1=x*x+2*x+3;
    int res2=res1+x;
    int res3=res2*res2+2*res2+3;
    int res4=res1*res1+2*res1+3;
    int res5=res3+res4;
    int res6=res5*res5+2*res5+3;
    cout<<res6;
    return 0;
}