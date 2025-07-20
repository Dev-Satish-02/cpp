#include <iostream>
using namespace std;

void reverseRecursive(int arr[], int left, int right)
{
    if (left >= right)
        return;
    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;
    reverseRecursive(arr, left + 1, right - 1);
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reverseRecursive(arr, 0, n - 1);

    cout << "Reversed array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
// time complexity: O(n)
// space complexity: O(n) due to recursion stack