#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for(int i=0; i<n; i++) {
        string t = s.substr(0, i) + s.substr(i+1);
        int m = t.size();
        bool palindrome = true;
        for(int j=0; j<m/2; j++) {
            if(t[j] != t[m-j-1]) {
                palindrome = false;
                break;
            }
        }
        if(palindrome) cnt++;
    }
    cout << cnt << endl;
    return 0;
}