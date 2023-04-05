#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n % 2050 != 0) {
        cout << "-1" << endl;
    } else {
        long long num = n / 2050;
        int sum_of_digits = 0;
        while (num != 0) {
            sum_of_digits += num % 10;
            num /= 10;
        }
        cout << sum_of_digits << endl;
    }

    return 0;
}
