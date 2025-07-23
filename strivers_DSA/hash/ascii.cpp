#include <iostream>
using namespace std;

int main() {
    string s = "Apple123! aPpLe";

    // Step 1: Create hash array for all 256 ASCII characters
    int hash[256] = {0};

    // Step 2: Pre-storing character frequencies
    for (int i = 0; i < s.length(); i++) {
        hash[(int)s[i]]++;
    }

    // Step 3: Queries
    char queries[] = {'A', 'a', '1', '!', 'e', 'P', 'z'};
    int q = sizeof(queries) / sizeof(queries[0]);

    for (int i = 0; i < q; i++) {
        char ch = queries[i];
        cout << "Frequency of '" << ch << "': " << hash[(int)ch] << endl;
    }

    return 0;
}
