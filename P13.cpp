// Pattern Program - 13
// Star/Kite Pattern

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, r;
    cin >> r;
    // For the upper half 
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= r - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= 2*i-1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // For the lower half
    for (i = r; i >= 1; i--)
    {
        for (j = 1; j <= r - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= 2*i-1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}