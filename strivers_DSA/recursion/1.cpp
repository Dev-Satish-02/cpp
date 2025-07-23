#include <iostream>
using namespace std;

void printFrom1ToN(int n)
{
    if (n == 0)
        return;
    printFrom1ToN(n - 1);
    cout << n << " ";
}

int main()
{
    int N;
    cout << "Enter N: ";
    cin >> N;

    printFrom1ToN(N);
    return 0;
}
