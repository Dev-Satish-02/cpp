#include <iostream>
using namespace std;

void sumParameterized(int i, int sum)
{
    if (i < 1)
    {
        cout << "Sum is: " << sum << endl;
        return;
    }
    sumParameterized(i - 1, sum + i);
}

int main()
{
    int N;
    cout << "Enter N: ";
    cin >> N;

    sumParameterized(N, 0);
    return 0;
}
