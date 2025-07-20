#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    vector<int> divisors;

    for (int i = 1; i <= sqrt(N); ++i) {
        if (N % i == 0) {
            divisors.push_back(i);
            if (i != N / i) {
                divisors.push_back(N / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    cout << "Divisors of " << N << ": [";
    for (int i = 0; i < divisors.size(); ++i) {
        cout << divisors[i];
        if (i < divisors.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
