// Pattern Program - 4
// Half Pyramid

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
        for (j = 1; j <= r; j++)
        {
            if (j <= r - i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}

// End of Code