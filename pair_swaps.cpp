#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    unordered_map<int, int> freq;
    long long cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += i - freq[arr[i]];
        freq[arr[i]]++;
    }
    cout << cnt << endl;
    return 0;
}
