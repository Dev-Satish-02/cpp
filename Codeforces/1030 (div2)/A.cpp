#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        string result;
        cin >> n >> k;
        for (int i = 0; i < k; ++i) result += '1';
        for (int i = 0; i < n - k; ++i) result += '0';
        cout << result << endl;
    }

    return 0;
}
