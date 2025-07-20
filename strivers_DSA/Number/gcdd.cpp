#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter two integers: ";
    cin >> n1 >> n2;
    int gcd = 1;

    for (int i = min(n1, n2); i >= 1; --i) {
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
            break;  // first common factor found, which is the GCD
        }
    }

    cout << "GCD is: " << gcd << endl;
    return 0;
}
