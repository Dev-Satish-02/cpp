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

void method2() {
  int n1, n2;
  cout << "Enter two integers: ";
  cin >> n1 >> n2;
  int gcd = 1;

  for (int i = min(n1, n2); i >= 1; --i) {
    if (n1 % i == 0 && n2 % i == 0) {
      gcd = i;
      break;
    }
  }

  cout << "GCD is: " << gcd << endl;
}
