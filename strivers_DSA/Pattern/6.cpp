/*

12345
1234
123
12
1

*/

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number: ";
    std::cin >> x;
    for (int i = x; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << j;
        }
        cout << endl;
    }
}
