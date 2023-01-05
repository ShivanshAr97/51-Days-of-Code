// 22/12/2022

#include <iostream>

using namespace std;
int main()
{
    int a=0;
    int b=0;
    int c=0;
    int arr1[6] = {1, 3, 5, 7, 8, 10};
    int arr2[4] = {4, 6, 9, 11};
    int arr3[1] = {2};
    int d, e;
    cin >> d >> e;
    for (int i = 0; i < 6; i++)
    {
        if (arr1[i] == d || arr1[i] == e)
        {
            a++;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (arr1[i] == d || arr1[i] == e)
        {
            b++;
        }
    }
    for (int i = 0; i < 1; i++)
    {
        if (arr1[i] == d || arr1[i] == e)
        {
            c++;
        }
    }
    if (a == 2 || b == 2 || c == 2)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}