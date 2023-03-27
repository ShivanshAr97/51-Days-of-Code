#include <bits/stdc++.h> // header file includes every Standard library
int main() {
	// Your code here
        long long n;
        std::cin>>n;
        long ans=0;
        for(long long i=1000;i<=n;i*=1000){
            ans+=(n-i)+1;
        }
        std::cout<<ans;
        return 0;
}