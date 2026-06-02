/*
method 1:
input = 1
 *
input = 2
 *
***
input = 3
  *
 ***
*****
input = 5 -> 9 2n-1
              b k j i
    *         4 1 5 1    4, 1, 4
   ***        3 2 6 2    3, 3, 3
  *****       2 3 7 3    2, 5, 2
 *******      1 4 8 4    1, 7, 1
*********     0 5 9 5    0, 9, 0

method 2:
input = 5
space, *, space, i
4, 1, 4, 0
3, 3, 3, 1
2, 5, 2, 2
1, 7, 1, 3
0, 9, 0, 4
(n-i-1), (2i+1), (n-i-1), i
*/

#include <iostream>
using namespace std;

int main() {
  int x;
  cout << "Enter a number: ";
  cin >> x;
  for (int i = 1; i <= x; i++) {
    for (int j = 1; j <= 2 * x - 1; j++) {
      if (j <= x - i || j > x + i - 1)
        cout << " ";
      else
        cout << "*";
    }
    cout << endl;
  }
}

void method2() {
  int x;
  cout << "Enter a number: ";
  cin >> x;
  for (int i = 0; i < x; i++) {
    // blank
    for (int j = 0; j < x - i - 1; j++) {
      cout << " ";
    }
    // star
    for (int j = 0; j < 2 * i + 1; j++) {
      cout << "*";
    }
    // blank
    for (int j = 0; j < x - i - 1; j++) {
      cout << " ";
    }
  }
}
