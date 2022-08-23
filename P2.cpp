// Pattern Program - 2
// Hollow rectangle Pattern

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
            if (i == 1 || i == r || j == 1 || j == c)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

// End of Code