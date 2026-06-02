#include <iostream>
using namespace std;

int main() {
  int n, count = 0;
  cout << "Enter a number: ";
  cin >> n;
  n = abs(n);
  if (n == 0)
    count = 1;
  else {
    while (n > 0) {
      n /= 10;
      count++;
    }
  }
  cout << "The number of digits is: " << count << endl;
  // int cnt = (int)(log10(n)+1);
}
