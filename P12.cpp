// Pattern Program - 12
// Palindrome in full pyramid

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k, r;
    cin >> r;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= r - i; j++)
        {
            cout << "  ";
        }

        for (j = 1, k = 2 * i - 1; j <= 2 * i - 1; j++, k--)
        {
            if (j <= k)
                cout << j << " ";
            else
                cout << k << " ";
        }

        cout << endl;
    }
    return 0;
}