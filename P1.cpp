// Pattern Program - 1
// Rectangle pattern

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c, i, j;
    // r-> rows, c-> columns
    cin >> r >> c;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}