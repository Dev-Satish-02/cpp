// https://codeforces.com/contest/2013/problem/A

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<long long> results;

    while (t--)
    {
        long long n, x, y;
        cin >> n >> x >> y;

        if (n == 0)
        {
            results.push_back(0);
            continue;
        }

        if (y <= x)
        {
            results.push_back((n + y - 1) / y);
        }
        else
        {
            long long seconds = 0;
            long long remaining_fruits = n;
            while (remaining_fruits > 0)
            {
                seconds++;
                long long add_fruits = min(y, remaining_fruits);
                remaining_fruits -= min(x, add_fruits);
            }

            results.push_back(seconds);
        }
    }
    for (const auto &result : results)
    {
        cout << result << endl;
    }

    return 0;
}
