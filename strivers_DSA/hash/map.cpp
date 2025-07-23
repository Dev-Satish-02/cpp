#include <iostream>
#include <map>
using namespace std;

int main() {
    // Input array with large numbers
    int arr[] = {1000000000, 987654321, 1000000000, 123456789, 987654321};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Create a map to hash large numbers (stores keys in sorted order)
    map<int, int> hash;

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

    // Step 3: Print entire map using range-based for loop
    cout << "\nAll key-value pairs in the map (sorted):\n";
    for (auto it : hash) {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}

// Speed (lookup)   Slower than unordered_map (O(log n))
// Worst Case Time	O(log n)
// Order of keys    Ordered (keys are sorted)
