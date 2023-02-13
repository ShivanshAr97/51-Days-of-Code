#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	long a,b,c,d;
    cin>>a>>b>>c>>d;
    long ans1=max(a*c, a*d);
    long ans2=max(b*c, b*d);
    cout<<max(ans1,ans2);
    return 0;
}