#include <iostream>
#include <utility>   // for std::pair, std::make_pair, std::swap, std::tie
#include <vector>
#include <tuple>     // for std::tie
using namespace std;

int main() {
    // 1. Initialization
    pair<int, string> p1(1, "Alice");
    pair<int, string> p2 = make_pair(2, "Bob");
    cout << "1. Initialization:\n";
    cout << "p1: " << p1.first << ", " << p1.second << endl;
    cout << "p2: " << p2.first << ", " << p2.second << endl << endl;

    // 2. Assignment
    pair<int, string> p3;
    p3 = p1;
    cout << "2. Assignment:\n";
    cout << "p3 (assigned from p1): " << p3.first << ", " << p3.second << endl << endl;

    // 3. Comparison
    pair<int, int> a(1, 2), b(1, 2), c(1, 3);
    cout << "3. Comparison:\n";
    cout << "(a == b): " << (a == b) << endl;  // true
    cout << "(a != c): " << (a != c) << endl;  // true
    cout << "(a < c): " << (a < c) << endl;    // true
    cout << "(c > b): " << (c > b) << endl << endl;  // true

    // Given two pairs: A and B
    // A < B is true if:
    // A.first < B.first
    // OR (A.first == B.first AND A.second < B.second)


    // 4. Swap
    cout << "4. Swap:\n";
    cout << "Before swap: a = {" << a.first << ", " << a.second << "} ";
    cout << "b = {" << b.first << ", " << b.second << "}" << endl;
    a.swap(b);
    cout << "After swap:  a = {" << a.first << ", " << a.second << "} ";
    cout << "b = {" << b.first << ", " << b.second << "}" << endl << endl;

    // 5. Use in vector
    cout << "5. Use in vector:\n";
    vector<pair<int, string>> v;
    v.push_back({10, "Ten"});
    v.push_back(make_pair(20, "Twenty"));
    for (auto x : v) {
        cout << "{" << x.first << ", " << x.second << "}" << endl;
    }
    cout << endl;

    // 6. Tie (unpacking)
    cout << "6. Tie (unpacking):\n";
    int id;
    string name;
    tie(id, name) = make_pair(99, "Unpacked");
    cout << "id: " << id << ", name: " << name << endl << endl;

    // 7. Nested pair
    cout << "7. Nested pair:\n";
    pair<int, pair<int, int>> nested = {1, {2, 3}};
    cout << "First: " << nested.first << ", Second.first: "
         << nested.second.first << ", Second.second: "
         << nested.second.second << endl;

    return 0;
}
