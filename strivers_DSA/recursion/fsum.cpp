#include <iostream>
using namespace std;

int sumFunctional(int n)
{
    if (n == 0)
        return 0;
    return n + sumFunctional(n - 1);
}

int main()
{
    int N;
    cout << "Enter N: ";
    cin >> N;

    cout << "Sum is: " << sumFunctional(N) << endl;
    return 0;
}
