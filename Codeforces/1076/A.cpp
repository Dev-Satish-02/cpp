#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<string> results;

    while (t--)
    {
        int n, s, x;
        cin >> n >> s >> x;

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            sum += a;
        }

        if (s >= sum && (s - sum) % x == 0)
            results.push_back("YES");
        else
            results.push_back("NO");
    }

    for (const string &res : results)
    {
        cout << res << '\n';
    }

    return 0;
}
