#include <bits/stdc++.h>

using namespace std;
int main()
{
  string date;
  cin >> date;

  int ans = 0;
  string temp = "";
  for (int i = 0; i < date.size(); i++)
  {
    if (date[i] != '/')
    {
      temp += date[i];
    }
  }
  ans = stoi(temp);
  if (ans < 20220620)
  {
    cout << "Before";
  }
  else
  {
    cout << "After";
  }

  return 0;
}
