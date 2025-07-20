#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num % 2 == 0 && (num / 2) % 2 == 0) {
        cout << num << " divided by 2 results in two even numbers." << endl;
    } else {
        cout << num << " divided by 2 does not result in two even numbers." << endl;
    }

    return 0;
}
