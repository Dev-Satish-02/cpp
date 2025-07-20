#include <iostream>
using namespace std;

void printFromNTo1(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    printFromNTo1(n - 1);
}

int main()
{
    int N;
    cout << "Enter N: ";
    cin >> N;

    printFromNTo1(N);
    return 0;
}
