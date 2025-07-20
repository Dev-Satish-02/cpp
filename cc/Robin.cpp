// https://codeforces.com/contest/2014/problem/A
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int results[10000];
    int index = 0;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int robin_gold = 0;
        int gold_given_count = 0;

        for (int j = 0; j < n; ++j)
        {
            int a;
            cin >> a;

            if (a >= k)
            {
                robin_gold += a;
            }
            else if (a == 0 && robin_gold > 0)
            {
                robin_gold--;
                gold_given_count++;
            }
        }

        results[index++] = gold_given_count;
    }

    for (int i = 0; i < index; ++i)
    {
        cout << results[i] << endl;
    }

    return 0;
}
