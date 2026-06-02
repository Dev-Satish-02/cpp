// https://atcoder.jp/contests/abc372/tasks/abc372_a

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x, result;
    cin >> x;
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] != '.')
        {
            result += x[i];
        }
    }
    cout << result << endl;
}