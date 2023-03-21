#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string S;
    int K;
    cin >> S >> K;

    sort(S.begin(), S.end()); // sort the characters of S in lexicographic order

    int count = 1;
    string permutation = S;
    do {
        if (count == K) {
            cout << permutation << endl;
            return 0;
        }
        count++;
    } while (next_permutation(permutation.begin(), permutation.end())); // generate all permutations of S in lexicographic order

    cout << "No solution found." << endl;
    return 0;
}
