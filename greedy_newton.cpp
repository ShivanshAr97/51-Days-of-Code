#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	long a,b,c;
    cin>>a>>b>>c;
    long d = 0;
    long newton = max((a-c),d);
    long einstein = max(b-max(d, (c-a)), d);
    cout<<newton<<" "<<einstein;
    return 0;
}