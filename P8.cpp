// Pattern Program - 8
// Inverted Pattern of numbers

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, i, j;
    // r-> rows
    cin >> r;
    for (i = r; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}