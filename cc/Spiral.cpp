// https://atcoder.jp/contests/abc375/tasks/abc375_c

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<char>> A(N, vector<char>(N));
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < N / 2; ++i) {
        int start = i;
        int end = N - 1 - i;
        
        vector<vector<char>> temp = A;

        for (int x = start; x <= end; ++x) {
            for (int y = start; y <= end; ++y) {
                temp[y][end - (x - start)] = A[x][y];
            }
        }
        
        A = temp;
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << A[i][j];
        }
        cout << endl;
    }

    return 0;
}
