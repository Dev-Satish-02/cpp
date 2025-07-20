#include <iostream>
using namespace std;

int main()
{
    int n, reversed;
    cout << "Enter a number: ";
    cin >> n;
    int nn = abs(n);
    if (nn == 0)
    {
        reversed = 0;
    }
    else
    {
        while (nn > 0)
        {
            int digit = nn % 10;
            reversed = reversed * 10 + digit;
            nn /= 10;
        }
    }
    if (reversed == n)
    {
        cout << "The number is a palindrome." << endl;
    }
    else
    {
        cout << "The number is not a palindrome." << endl;
    }
}