/*

*****
*****
*****
*****
*****

*/

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number: ";
    std::cin >> x;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            std::cout << "*";
        }
        cout << endl;
    }
}
