// 6/1/2023

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    int sockets = 1;
    int cords = 0;
    while(sockets<B){
        cords++;
        sockets=sockets-1+A;
    }

    cout<<cords;

    return 0;
}