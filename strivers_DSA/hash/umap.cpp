#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    // Input array with large numbers
    int arr[] = {1000000000, 987654321, 1000000000, 123456789, 987654321};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Create an unordered_map to hash large numbers
    unordered_map<int, int> hash;

    // Step 1: Pre-storing frequencies
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    // Step 2: Query some large numbers
    int queries[] = {1000000000, 987654321, 999999999};
    int q = sizeof(queries) / sizeof(queries[0]);

    cout << "\nFrequencies of queried numbers:\n";
    for (int i = 0; i < q; i++) {
        int num = queries[i];
        cout << "Frequency of " << num << ": " << hash[num] << endl;
    }

    // Step 3: Print entire hash map using range-based for loop
    cout << "\nAll key-value pairs in the map:\n";
    for (auto it : hash) {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}

// Speed (lookup)   Faster (O(1) average)
// Worst Case Time	O(n) (but rare)
// Memory usage    More memory-efficient than map
// Order of keys    Unordered (no specific order)
// Use case         Best for large datasets with frequent lookups
