#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main()
{
    string s;
    cin >> s;
    string ans;
    ans[0] = '0';
    for (int i = 0; i < 3; i++)
    {
        if (s[i] == '0'){
            ans[i + 1] = '0';
        }
        else{
            ans[i + 1] = '1';
        }
    }
    for (int i = 0; i < 4; i++){
        cout<<ans[i];
    }
    return 0;
}