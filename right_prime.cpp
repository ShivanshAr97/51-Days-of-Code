// 13/1/2023

#include <bits/stdc++.h>

using namespace std;
bool isPrime(int x) {
    if (x <= 1) return false;
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int findNextPrime(int x) {
    while (!isPrime(x)) x++;
    return x;
}

int main() {
    int x;
    cin >> x;
    cout<<findNextPrime(x);
    return 0;
}
