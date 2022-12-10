#include <bits/stdc++.h>
using namespace std;

int main() {
	int gifts;
    double ans;
    cin >> gifts;
    while(gifts--){
        double price;
        cin>>price;
        string currency;
        cin>>currency;
        if (currency=="JPY"){
            ans+=price;
        }
        else if(currency=="BTC"){
            ans+=(380000*price);
        }
    }
    cout<<fixed<<setprecision(8)<<ans;    
    return 0;
}
