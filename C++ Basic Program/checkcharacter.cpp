#include <iostream>
using namespace std;

int main() {
    char arr[100];
    int n;

    cout << "Enter the number of characters to check: ";
    cin >> n;

   
    cout << "Enter " << n << " characters: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if ((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z')) {
            cout << arr[i] << " is an alphabet." << endl;
        } else {
            cout << arr[i] << " is not an alphabet." << endl;
        }
    }

    return 0;
}
