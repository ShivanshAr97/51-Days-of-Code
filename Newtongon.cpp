#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num=0;
    int count=0;
    int maxi=0;
    cin>>num;
    int arr[num]={0};
    for(int i=0; i<num; i++){
        cin>>arr[i];
        count+=arr[i];
        maxi=max(arr[i], maxi);
    }
    if ((count-maxi)>maxi)
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}
