// Pattern Program - 5
// Half pyramid using numbers

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, i, j;
    // r-> rows
    cin >> r;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}