#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 3, 5, 8, 10};

    int x = 3;

    auto low = lower_bound(arr.begin(), arr.end(), x);
    auto up = upper_bound(arr.begin(), arr.end(), x);

    cout << "lower_bound index: " << (low - arr.begin()) << endl;  // 1
    cout << "upper_bound index: " << (up - arr.begin()) << endl;  // 3

    return 0;
}
