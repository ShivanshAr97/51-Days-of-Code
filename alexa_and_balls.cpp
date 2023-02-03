#include <bits/stdc++.h>

using namespace std;
int main()
{
    long a, b, c, d;
    cin >> a >> b >> c >> d;
    long res=0;
    int ans=0;
    if (b>=c*d)
    {
        ans=-1;
    }
    else
    {
        while (res*d<a)
        {
            a += b;
            res+=c;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}