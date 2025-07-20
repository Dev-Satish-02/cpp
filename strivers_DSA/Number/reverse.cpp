#include <iostream>
using namespace std;

int main()
{
    int n, reversed = 0;
    cout << "Enter a number: ";
    cin >> n;
    n = abs(n);
    if (n == 0)
    {
        reversed = 0;
    }
    else
    {
        while (n > 0)
        {
            int digit = n % 10;
            reversed = reversed * 10 + digit;
            n /= 10;
        }
    }
    cout << "The reversed number is: " << reversed << endl;
    return 0;
}