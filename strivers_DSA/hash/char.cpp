#include <iostream>
using namespace std;

int main() {
    string s = "applebanana";
    int hash[26] = {0};  // For characters 'a' to 'z'

    // Step 1: Pre-storing frequencies
    for (int i = 0; i < s.length(); i++) {
        hash[s[i] - 'a']++;  // 'a' -> index 0, 'b' -> index 1, ..., 'z' -> index 25
    }

    // Step 2: Fetching queries
    char queries[] = {'a', 'b', 'n', 'z'};
    int q = 4;

    for (int i = 0; i < q; i++) {
        char ch = queries[i];
        cout << "Frequency of '" << ch << "': " << hash[ch - 'a'] << endl;
    }

    return 0;
}
