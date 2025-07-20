// https://atcoder.jp/contests/abc375/tasks/abc375_b

#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<pair<long long, long long>> points(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> points[i].first >> points[i].second;
    }
    double total_cost = 0.0;

    total_cost += sqrt(pow(points[0].first, 2) + pow(points[0].second, 2));

    for (int i = 0; i < N - 1; ++i)
    {
        long long dx = points[i].first - points[i + 1].first;
        long long dy = points[i].second - points[i + 1].second;
        total_cost += sqrt(dx * dx + dy * dy);
    }

    total_cost += sqrt(pow(points[N - 1].first, 2) + pow(points[N - 1].second, 2));

    cout << fixed << setprecision(20) << total_cost << endl;

    return 0;
}
