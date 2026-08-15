// // count and compare odds and even

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the size of array: ";
//     cin >> n;

//     vector<int> arr(n);

//     cout << "Enter " << n << " elements: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "\nArray elements are: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     // Count odd and even numbers
//     int oddCount = 0;
//     int evenCount = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 == 0)
//             evenCount++;
//         else
//             oddCount++;
//     }

//     cout << "\nEven count: " << evenCount << endl;
//     cout << "Odd count: " << oddCount << endl;

//     // Compare and display result
//     if (evenCount > oddCount)
//     {
//         cout << "Even numbers are more" << endl;
//     }
//     else if (oddCount > evenCount)
//     {
//         cout << "Odd numbers are more" << endl;
//     }
//     else
//     {
//         cout << "Even and Odd numbers are equal" << endl;
//     }

//     return 0;
// }



///Marks sum of top 5 and last 5
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> marks(n);

    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
    }

    sort(marks.begin(), marks.end(), greater<int>());

    int sum = 0;

    // Sum of top 5 marks
    for (int i = 0; i < 5 && i < n; i++)
    {
        sum += marks[i];
    }

    cout << sum << endl;

    // Print bottom 5 marks
    for (int i = 0; i < 5 && i < n; i++)
    {
        cout << marks[n - 1 - i] << " ";
    }

    cout << endl;

    return 0;
}  
