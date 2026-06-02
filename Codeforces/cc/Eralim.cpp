// https://codeforces.com/contest/2013/problem/B

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        long long sum = 0, max_rating = 0;
        
        for (int i = 0; i < n; ++i) {
            long long rating;
            cin >> rating;
            sum += rating;
            if (rating > max_rating) {
                max_rating = rating;
            }
        }
        
        // The result is twice the largest rating minus the total sum
        cout << (2 * max_rating - sum) << endl;
    }
    
    return 0;
}
