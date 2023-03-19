#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    string s = to_string(a) + to_string(b);
    int d = stoi(s);
    int e = sqrt(d);
    if ((floor(e) * floor(e)) == d ){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}
