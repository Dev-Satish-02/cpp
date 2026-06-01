// https://codeforces.com/contest/2218/problem/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum = 0, x, mx = -1000;

        for (int i = 0; i < 7; i++) {
            cin >> x;
            sum += x;
            mx = max(mx, x);
        }

        cout << 2 * mx - sum << endl;
    }
    return 0;
}
