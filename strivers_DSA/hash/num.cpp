#include <iostream>
using namespace std;

int main() {
    // Step 1: Input array
    int arr[] = {1, 3, 2, 1, 3, 4, 1};
    int n = 7;

    // Step 2: Create hash array (size = max element + 1)
    int hash[13] = {0};  // Since max value is 12

    // Step 3: Pre-storing (frequency count)
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    // Step 4: Fetching queries
    int queries[] = {1, 2, 3, 4, 5};
    int q = 5;

    for (int i = 0; i < q; i++) {
        int num = queries[i];
        cout << "Frequency of " << num << ": " << hash[num] << endl;
    }

    return 0;
}
