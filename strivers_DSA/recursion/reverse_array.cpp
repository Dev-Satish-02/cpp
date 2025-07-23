#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n], rev[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        rev[i] = arr[n - 1 - i];
    }
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
    {
        cout << rev[i] << " ";
    }
}

// time complexity: O(n)
// space complexity: O(n)
