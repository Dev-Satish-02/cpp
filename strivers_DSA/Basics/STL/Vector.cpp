#include <iostream>
#include <vector>
#include <algorithm> // for sort
using namespace std;

int main() {
    // 1. Initialization
    vector<int> v1 = {5, 10, 15};
    vector<int> v2(5, 100);             // {100, 100, 100, 100, 100}
    vector<int> v3;                     // empty vector

    // 2. push_back and emplace_back
    v3.push_back(20);
    v3.push_back(30);
    v3.emplace_back(40);  // slightly faster than push_back (constructs in-place)

    cout << "v3 after push_back and emplace_back: ";
    for (int x : v3) cout << x << " ";
    cout << endl;

    // 3. insert and emplace
    v3.insert(v3.begin() + 1, 25);        // insert 25 at index 1
    v3.emplace(v3.begin() + 2, 27);       // insert 27 at index 2

    cout << "v3 after insert and emplace: ";
    for (int x : v3) cout << x << " ";
    cout << endl;

    // 4. erase
    v3.erase(v3.begin() + 2);  // remove element at index 2

    cout << "v3 after erase at index 2: ";
    for (int x : v3) cout << x << " ";
    cout << endl;

    // 5. resize
    v3.resize(6);  // resize to 6 elements (adds 0s if shrinking)
    cout << "v3 after resize to 6: ";
    for (int x : v3) cout << x << " ";
    cout << endl;

    // 6. assign
    v3.assign(4, 99); // {99, 99, 99, 99}
    cout << "v3 after assign(4, 99): ";
    for (int x : v3) cout << x << " ";
    cout << endl;

    // 7. clear
    v3.clear();
    cout << "v3 size after clear(): " << v3.size() << endl;

    // 8. swap
    cout << "Before swap v1: ";
    for (int x : v1) cout << x << " ";
    cout << "\nBefore swap v2: ";
    for (int x : v2) cout << x << " ";
    cout << endl;

    v1.swap(v2);

    cout << "After swap v1: ";
    for (int x : v1) cout << x << " ";
    cout << "\nAfter swap v2: ";
    for (int x : v2) cout << x << " ";
    cout << endl;

    // 9. Sorting
    vector<int> v4 = {50, 10, 40, 20, 30};
    sort(v4.begin(), v4.end()); // ascending
    cout << "v4 after sort: ";
    for (int x : v4) cout << x << " ";
    cout << endl;

    // 10. Comparison
    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 4};
    cout << "a < b? " << (a < b) << endl;   // true (lexicographical)

    return 0;
}
