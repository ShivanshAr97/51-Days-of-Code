#include <bits/stdc++.h>

using namespace std;
int main() {
  string date;
  cin >> date;

  int year = stoi(date.substr(0, 4));
  int month = stoi(date.substr(5, 2));
  int day = stoi(date.substr(8, 2));

  if (year < 2022 || (year == 2022 && (month < 6 || (month == 6 && day < 20)))) {
    cout << "Before";
  } else {
    cout << "After";
  }

  return 0;
}
