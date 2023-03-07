#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int a,b;
    cin>>a>>b;
    int digi1=0;
    int sum1=0;
    int sum2=0;
    int digi2=0;
    while(a>0){
        digi1=a%10;
        a/=10;
        sum1+=digi1;
    }
    while (b>0){
        digi2=b%10;
        b/=10;
        sum2+=digi2;
    }
    cout<<max(sum1, sum2);

    return 0;
}