/*enter 4
 * * * *
 * * *
 * *
 *       */

#include <iostream>
using namespace std;

int main()
{
    int n, i, j;

    cout << "enter ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }

    int row, col;
    cout << "enter ";
    cin >> n;
    for (row = 1; row <= n; row = row + 1)
    {
        for (col = 1; col <= n - row + 1; col = col + 1)
            cout << "* ";
        cout << endl;
    }

    return 0;
}