#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> words(n);
    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }
    for (int i = 0; i < n; i++)
    {
        string word = words[i];
        if (word.length() > 10)
        {
            cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
        }
        else
        {
            cout << word << endl;
        }
    }
    return 0;
}
