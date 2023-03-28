#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> x(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        sum += x[i];
    }
    
    int avg = round((double)sum / n);
    
    int total_stamina = 0;
    for (int i = 0; i < n; i++) {
        total_stamina += pow(x[i] - avg, 2);
    }
    
    cout << total_stamina << endl;
    
    return 0;
}