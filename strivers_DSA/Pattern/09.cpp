/*

input = 1
 *
input = 2
*
*
input = 3
  *
 ***
*****
*****
 ***
  *
input = 6
     *
    ***
   *****
  *******
 *********
***********
***********
 *********
  *******
   *****
    ***
     *
*/

#include <iostream>
using namespace std;

void erect(int x)
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= 2 * x - 1; j++)
        {
            if (j <= x - i || j > x + i - 1)
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
}

void inverse(int x)
{
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

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    erect(x);
    inverse(x);
}
