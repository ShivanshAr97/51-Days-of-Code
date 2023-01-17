#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int n; cin >> n;
    map<int,int> mapp;

    for(int i=0; i<n-1; i++){

        int x,y;
        cin >> x >> y;

    mapp[x]++; mapp[y]++;

    }
for(auto &it : mapp){

    if(it.second == n-1){
        cout << "Yes";
        goto nxt;
    }

}

    cout << "No";

    nxt: ;
    return 0;
}