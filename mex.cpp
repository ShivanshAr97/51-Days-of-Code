#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a;
    cin >> a;
    int ans = 0;
    set<int> st;
    for (int i = 0; i < a; i++)
    {
        int b;
        cin >> b;
        st.insert(b);
    }
    for (auto it = st.begin(); it != st.end(); it++)
    {
        if (*it == ans)
        {
            ans++;
        }
        else
        {
            break;
        }
    }
    cout << ans;
    return 0;
}