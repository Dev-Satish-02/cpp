/*

input = 3
*
**
***
**
*
input = 6
*
**
***
****
*****
******
*****
****
***
**
*

*/

#include <iostream>
using namespace std;

void two(int x)
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "*";
        }
        cout << endl;
    }
}

void five(int x)
{
    for (int i = x - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int x;
    cout << "Enter a number: ";
    std::cin >> x;
    two(x);
    five(x);
}
