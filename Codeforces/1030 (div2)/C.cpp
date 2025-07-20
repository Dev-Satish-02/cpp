#include <iostream>
using namespace std;

int popcount(long long x) {
    int count = 0;
    while (x) {
        if (x % 2 == 1) count++;
        x /= 2;
    }
    return count;
}

const int MAX = 5000;
long long a[MAX];
int beauty[MAX];
long long next_jump[MAX];

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        long long total_beauty = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            beauty[i] = popcount(a[i]);
            total_beauty += beauty[i];

            // find next increase point
            long long x = a[i] + 1;
            while (popcount(x) <= beauty[i]) x++;
            next_jump[i] = x - a[i]; // how many steps needed to increase beauty
        }

        // simulate up to k operations
        while (k > 0) {
            int best = -1;
            long long min_cost = 1e18;

            for (int i = 0; i < n; i++) {
                if (next_jump[i] <= k && next_jump[i] < min_cost) {
                    min_cost = next_jump[i];
                    best = i;
                }
            }

            if (best == -1) break; // no more beauty gain possible within k

            k -= next_jump[best];
            a[best] += next_jump[best];
            beauty[best]++;
            total_beauty++;

            // update next_jump
            long long x = a[best] + 1;
            while (popcount(x) <= beauty[best]) x++;
            next_jump[best] = x - a[best];
        }

        cout << total_beauty << endl;
    }

    return 0;
}
