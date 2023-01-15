#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
bool palindrome(string s)
{
    string b = s;
    reverse(s.begin(), s.end());
    if (b == s)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    // Your code here
    string s;
    cin >> s;
    int n = s.size();
    int l1 = (n - 1) / 2;
    int l2 = (n + 3) / 2;
    string s1 = s.substr(0, l1);
    string s2 = s.substr(l2 - 1, n);
    if (palindrome(s) == true && palindrome(s1) == true && palindrome(s2) == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}