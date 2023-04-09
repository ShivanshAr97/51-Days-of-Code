#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n % 2 != 0) {
        cout << -1 << endl;
    }
    else {
        long long min_buses = ceil(n/6.0);
        long long max_buses = n/4;

        if (min_buses <= max_buses) {
            cout << min_buses << " " << max_buses << endl;
        }
        else {
            cout << -1 << endl;
        }
    }

    return 0;
}