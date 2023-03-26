#include <bits/stdc++.h>
using namespace std;

int main() {
    long n;
    cin >> n;
    set<long> s;
    for (long a = 2; a * a <= n; a++) {
        for (long b = 2; pow(a, b) <= n; b++) {
            s.insert(pow(a, b));
        }
    }
    long unrepresentable = n - s.size();
    cout << unrepresentable << endl;
    return 0;
}