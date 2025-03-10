/*  n=3
    1 2 3
    1 2 3
    1 2 3 */


#include <iostream>
using namespace std;
int main()
{
    int n, i, j;

    cout << "enter ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
