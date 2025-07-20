#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> digits(n);
    
    for (int i = 0; i < n; i++) {
        cin >> digits[i];
    }
    
    string target = "01032025";
    int j = 0;  // Pointer for target
    int count = 0;  // Count of digits used
    
    for (int i = 0; i < n; i++) {
        count++;
        if (digits[i] == (target[j] - '0')) {
            j++; // Move to the next digit in the target
        }
        if (j == target.size()) {
            cout << count << endl; // Found the full sequence
            return;
        }
    }
    
    cout << 0 << endl; // Not possible to form the date
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }

    return 0;
}
