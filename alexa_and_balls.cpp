#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans=0;
    long res=0;
    if (b>=c*d)
    {
        ans=-1;
    }
    else
    {
        while (res*d<a)
        {
            a = a + b;
            res=res+c;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}