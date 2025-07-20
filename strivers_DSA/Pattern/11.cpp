/*
Input Format: N = 3
Result:
1
01
101

Input Format: N = 6
Result:
1
01
101
0101
10101
010101
*/

#include <iostream>
using namespace std;

int main()
{
    int x, start = 1;
    cout << "Enter a number: ";
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        if (i % 2 == 0)
        {
            start = 0;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}