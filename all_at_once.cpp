#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        double sum = 0;
        for (int j = 0; j < n; j++) {
            if (i != j) {
                sum += a[j];
            }
        }
        double mean = sum / (n - 1);
        if (mean == a[i]) {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}