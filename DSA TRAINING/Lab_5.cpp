#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> ans(n);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--)
    {

        // Remove elements smaller than or equal to current
        while (!st.empty() && st.top() <= arr[i])
        {
            st.pop();
        }

        // If stack is empty, no greater element exists
        if (st.empty())
            ans[i] = 0;
        else
            ans[i] = st.top();

        // Put current element into stack
        st.push(arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}