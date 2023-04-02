#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin>>n;
    int cnt=0;
    for (int i = 1; i < n; i++)
    {
        if(n%i==0){
            cnt+=i;
        }
    }
    (cnt==n)? cout<<n*n : cout<<-1;
    
    return 0;
}
