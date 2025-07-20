// https://atcoder.jp/contests/abc372/tasks/abc372_b
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int M;
    vector<int> A;
    cin >> M;

    while (M > 0)
    {
        for (int i = 10; i >= 0; --i)
        {
            if (pow(3, i) <= M)
            {
                A.push_back(i);
                M -= pow(3, i);
                break;
            }
        }
    }

    std::cout << A.size() << std::endl;
    int i = A.size();
    while (i--)
    {
        std::cout << A[i] << " ";
    }
}