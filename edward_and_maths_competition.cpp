// 18/1/2023

#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a;
    cin>>a;
    int even = floor(a/2);
    int odd = a-even;
    cout<<even*odd;
    
    return 0;
}