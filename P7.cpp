// Pattern Program - 7
// Butterfly Pattern

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, i, j;
    int counter = 1;
    // r-> rows
    cin >> r;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= 2 * r; j++)
        {
            if (j <= i || j > ((2 * r) - i))
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

    for (i = r; i >= 1; i--)
    {
        for (j = 1; j <= 2 * r; j++)
        {
            if (j <= i || j > ((2 * r) - i))
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