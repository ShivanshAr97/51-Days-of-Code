#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {
int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 1e9;
    for (int i = 0; i < (1 << n); i++) {
        vector<int> ors;
        int prev = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                int cur = 0;
                for (int k = prev; k <= j; k++) {
                    cur |= a[k];
                }
                ors.push_back(cur);
                prev = j + 1;
            }
        }
        if (prev < n) {
            int cur = 0;
            for (int k = prev; k < n; k++) {
                cur |= a[k];
            }
            ors.push_back(cur);
        }
        int xorsum = 0;
        for (int o : ors) {
            xorsum ^= o;
        }
        ans = min(ans, xorsum);
    }
    cout << ans << endl;
    return 0;
}