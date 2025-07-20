/*

input = 1
 *
input = 2
 *
***
input = 3
  *
 ***
*****
input = 5 -> 9 2n-1
              b k j i
    *         4 1 5 1
   ***        3 2 6 2
  *****       2 3 7 3
 *******      1 4 8 4
*********     0 5 9 5

*/

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= 2 * x - 1; j++)
        {
            if (j <= x - i || j > x + i - 1) cout << " ";
            else cout << "*";
        }
        cout << endl;
    }
}
