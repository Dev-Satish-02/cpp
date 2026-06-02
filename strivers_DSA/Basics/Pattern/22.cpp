/*

N = 5
5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5

*/

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < 2 * n - 1; i++) {
    for (int j = 0; j < 2 * n - 1; j++) {

      int top = i;
      int left = j;
      int bottom = 2 * n - 2 - i;
      int right = 2 * n - 2 - j;

      int layer = min(min(top, bottom), min(left, right));

      cout << n - layer << " ";
    }
    cout << endl;
  }

  return 0;
}
