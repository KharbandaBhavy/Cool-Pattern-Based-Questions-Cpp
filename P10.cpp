// Pattern Program - 10
// Rhombus Pattern

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
        for (j = i; j <= r - 1; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= r; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

// End of Code