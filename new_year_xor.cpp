// 24/12/2022

#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,r, m = 1e9 + 7; 
    cin>>n;
    vector<long long int>v;
    for(int i = 0; i<n ; i++)
    {
        cin>>r;
        v.push_back(r);
    }

	long long int sum = 0, zero = 0 , one = 0, ans = 0LL;
	for (int i = 0; i < 64; i++)
	{
		one = 0LL; zero = 0LL; sum = 0LL;
        for (int j = 0; j < n; j++)
		{
			if ((v[j]>>i)&1LL) one++;
			else zero++;
			//v[j] >>= 1;
        }
		sum = ((one * zero)%m * ((1LL << i)%m))%m;
		ans += (sum%m);
	}
	cout<<ans%m<<endl;
	return 0;
}