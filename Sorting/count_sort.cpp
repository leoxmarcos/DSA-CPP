#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    // Input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Find maximum
    int maxi = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }

    // Count array
    int count[maxi + 1] = {0};

    // Store frequency
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    // Print sorted elements
    for (int i = 0; i <= maxi; i++)
    {
        while (count[i] > 0)
        {
            cout << i << " ";
            count[i]--;
        }
    }

    return 0;
}