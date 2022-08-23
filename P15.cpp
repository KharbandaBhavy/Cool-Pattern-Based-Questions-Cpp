// Pattern Program - 15
// Hollow Diamond Inscribed in a Rectangle

#include <iostream>
using namespace std;

int main()
{
    int i, j, r;
    cin >> r;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= 2 * r; j++)
        {
            // For Upper left Triangle
            if (i + j <= r + 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }

            // For Upper Right Triangle
            if (i + r <= j)
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

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= 2 * r; j++)
        {
            // For Lower left Triangle
            if (i >= j)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }

            // For Lower Right Triangle
            if (i > (2 * r) - j)
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
