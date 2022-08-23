// Pattern Program - 6
// Floyd's Triangle

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
        for (j = 1; j <= i; j++)
        {
            cout << counter << " ";
            counter++;
        }

        cout << endl;
    }
    return 0;
}

// End of Code