#include <iostream>
using namespace std;

int main() {
    int N1, N2;
    cout << "Enter two integers: ";
    cin >> N1 >> N2;

    // Euclidean algorithm
    while (N2 != 0) {
        int temp = N2;
        N2 = N1 % N2;
        N1 = temp;
    }

    cout << "GCD is: " << N1 << endl;
    return 0;
}
