#include <iostream>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=n;
    int digi,sum=0;
    while(n>0){
        digi=n%10;
        n=n/10;
        sum+=digi;
    }
    if((a%sum)==0?cout<<"Yes":cout<<"No");
    return 0;
}