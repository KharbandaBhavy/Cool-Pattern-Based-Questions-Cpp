// Pattern Program - 14
// Zig-Zag Pattern

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, r, n;
    cin >> n; // Only for 3 rows
    // n-> for the number of stars in the zig-zag pattern.

    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if((i+j)%4==0 || (i==2 && j%4==0)){
            cout << "*";
            }
            else{
                cout<<" ";
            }
        }
        cout << endl;
    }
    return 0;
}

// End of Code