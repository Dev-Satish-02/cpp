#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, a = 0;
    cin >> n;
    int temp = n;
    int count = 0;
    while (temp > 0)
    {
        temp /= 10;
        count++;
    }
    temp = n;
    while (temp > 0)
    {
        a += pow((temp % 10), count);
        temp /= 10;
    }
    if (a == n)
        cout << "armstrong";
    else
        cout << "no";
}