/*

Input Format: N = 3
Result:
  A
 ABA
ABCBA

Input Format: N = 6
Result:           i b m
     A            1 5 6
    ABA           2 4 6
   ABCBA          3 3 6
  ABCDCBA         4 2
 ABCDEDCBA        5 1
ABCDEFEDCBA       5 0

*/

#include <iostream>
using namespace std;

int main()
{
    int x;
    char ch = '@';
    cout << "Enter a number: ";
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= 2 * x - 1; j++)
        {
            if (j <= x - i || j > x + i - 1)
                cout << " ";
            if (j <= x && j > x - i)
            {
                ch++;
                cout << ch;
            }
            if (j > x && j <= x + i - 1)
            {
                ch--;
                cout << ch;
            }
        }
        ch = '@';
        cout << endl;
    }
}
