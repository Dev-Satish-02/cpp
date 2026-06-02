#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    // push_back
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }

    cout << "The elements in the vector: ";
    for (auto it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << endl;

    // front, back, size
    cout << "The front element of the vector: " << v.front() << endl;
    cout << "The last element of the vector: " << v.back() << endl;
    cout << "The size of the vector: " << v.size() << endl;
    cout << "The capacity of the vector: " << v.capacity() << endl;
    cout << "The max size of the vector: " << v.max_size() << endl;

    // pop_back
    cout << "Deleting element from the end: " << v.back() << endl;
    v.pop_back();

    cout << "After removing the last element: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    // insert at beginning
    v.insert(v.begin(), 5);
    cout << "After inserting 5 at the beginning: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // erase first element
    v.erase(v.begin());
    cout << "After erasing the first element: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // empty check
    cout << (v.empty() ? "Vector is empty" : "Vector is not empty") << endl;

    // Using cbegin and cend (constant iterators)
    cout << "Using cbegin() to cend(): ";
    for (auto cit = v.cbegin(); cit != v.cend(); ++cit)
        cout << *cit << " ";
    cout << endl;

    // Using reverse iterator
    cout << "Reverse iteration using rbegin() to rend(): ";
    for (auto rit = v.rbegin(); rit != v.rend(); ++rit)
        cout << *rit << " ";
    cout << endl;

    // Using const reverse iterator
    cout << "Using crbegin() to crend(): ";
    for (auto crit = v.crbegin(); crit != v.crend(); ++crit)
        cout << *crit << " ";
    cout << endl;

    // clear
    v.clear();
    cout << "Size after clear(): " << v.size() << endl;
    cout << (v.empty() ? "Vector is empty after clear" : "Vector is not empty after clear") << endl;

    return 0;
}
