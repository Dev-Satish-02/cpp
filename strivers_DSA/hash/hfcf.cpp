#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, int> hash;
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    int minFreq = n, maxFreq = 0;
    int minElement = 0, maxElement = 0;
    for (auto it : hash)
    {
        int element = it.first;
        int count = it.second;
        if (count < minFreq)
            minFreq = count, minElement = element;
        if (count > maxFreq)
            maxFreq = count, maxElement = element;
    }
    cout << "The highest frequency of " << maxFreq << " ,element is: " << maxElement << "\n";
    cout << "The lowest frequency of " << minFreq << " ,element is: " << minElement << "\n";

    return 0;
}