#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int max_value = INT_MIN;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int ai;
            cin >> ai;
            a.push_back(ai);
            if (ai > max_value)
            {
                max_value = ai;
            }
            sum += ai;
        }
        double mean = (double)sum / n;
    }
}
