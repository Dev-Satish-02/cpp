/*

N=5
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

i, *,  , *
0, 1, 8, 1
1, 2, 6, 2
2, 3, 4, 3
3, 4, 2, 4
4, 5, 0, 5
5, 4, 2, 4
6, 3, 4, 3
7, 2, 6, 2
8, 1, 8, 1


*/

#include <iostream>
using namespace std;

void one(int i, int x) {
  // left stars
  for (int j = 0; j < i + 1; j++)
    cout << "*";

  // middle spaces
  for (int j = 0; j < 2 * (x - i - 1); j++)
    cout << " ";

  // right stars
  for (int j = 0; j < i + 1; j++)
    cout << "*";
}

void two(int i, int x) {
  int stars = 2 * x - i - 1;

  // left stars
  for (int j = 0; j < stars; j++)
    cout << "*";

  // middle spaces
  for (int j = 0; j < 2 * (x - stars); j++)
    cout << " ";

  // right stars
  for (int j = 0; j < stars; j++)
    cout << "*";
}

int main() {
  int x;
  cout << "Enter a number: ";
  cin >> x;

  for (int i = 0; i < 2 * x - 1; i++) {
    if (i < x)
      one(i, x);
    else
      two(i, x);

    cout << endl;
  }

  return 0;
}

/*

Simple Direct Logic

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < 2 * n - 1; i++) {

        int stars = (i < n) ? i + 1 : 2 * n - i - 1;
        int spaces = 2 * (n - stars);

        for (int j = 0; j < stars; j++)
            cout << "*";

        for (int j = 0; j < spaces; j++)
            cout << " ";

        for (int j = 0; j < stars; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}
*/
