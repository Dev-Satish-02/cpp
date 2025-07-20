/*

input = 1
 *
input = 2
***
 *
input = 3
*****
 ***
  *
input = 5 -> 9 2n-1
              b k j i
*********     0 5 9 5
 *******      1 4 8 4
  *****       2 3 7 3
   ***        3 2 6 2
    *         4 1 5 1

 
x=5
           i j b *
*********  1   0 9
 *******   2   1 7
  *****    3   2 5
   ***     4   3 3   
    *

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
            if (j >= i && j <= 2 * x - i)
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
}
