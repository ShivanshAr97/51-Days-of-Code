#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int s = n;
    for (int i = n; i > 0; i--)
    {
        s = s & i;
        if(s==0){
            cout<<i;
            return 0;
        }
    }

    return 0;
}