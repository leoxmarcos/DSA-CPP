#include <iostream>
using namespace std;

int main()
{
    int arr[1000];
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Selection sort (largest element to last)
    for (int i = n - 1; i > 0; i--)
    {
        int maxIndex = i;

        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[maxIndex])
            {
                maxIndex = j;
            }
        }
        swap(arr[i], arr[maxIndex]);
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
