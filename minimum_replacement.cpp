#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	string s, t; cin >> s >> t; int ans = INT_MAX;
	for(int i = 0; i < (s.size() - t.size() + 1); ++i)
    {
		int cnt = 0;
		for(int j = 0; j < (t.size()); ++j){
			if (t[j] != s[i + j]) cnt++;
		}
		ans = min(ans, cnt);
	}
	cout <<ans;
    return 0;
}