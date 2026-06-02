#include <iostream>
#include <map>
using namespace std;

int main() {
    string s = "Hello World!";

    // Create a map to store character frequencies
    map<char, int> freq;

    // Step 1: Pre-storing character counts
    for (char ch : s) {
        freq[ch]++;
    }

    // Step 2: Print the character frequencies in sorted order (by character)
    cout << "Character frequencies:\n";
    for (auto it : freq) {
        cout << "'" << it.first << "' -> " << it.second << endl;
    }

    return 0;
}
