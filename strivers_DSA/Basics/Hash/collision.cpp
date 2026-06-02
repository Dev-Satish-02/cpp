#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Input array
    vector<int> arr = {2, 5, 16, 28, 139, 38, 48, 28, 18};

    // Set the size of our hash table (using modulo 10)
    const int MOD = 10;

    // Create a hash table with chaining: each index stores a list of elements
    vector<vector<int>> hash(MOD);

    // Step 1: Pre-storing using division method (modulo)
    for (int num : arr) {
        int index = num % MOD;
        hash[index].push_back(num);
    }

    // Step 2: Print the hash table
    cout << "Hash Table (index -> values):\n";
    for (int i = 0; i < MOD; i++) {
        cout << i << " -> ";
        for (int val : hash[i]) {
            cout << val << " ";
        }
        cout << endl;
    }

    // Step 3: Frequency fetching for a number (e.g. 28)
    int query = 28;
    int count = 0;
    for (int val : hash[query % MOD]) {
        if (val == query) count++;
    }
    cout << "\nFrequency of " << query << ": " << count << endl;

    return 0;
}
