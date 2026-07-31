#include <iostream>
using namespace std;


void printNaturalNumbers(int n) {
    if (n == 0) {
        return; 
    }
    printNaturalNumbers(n - 1); 
    cout << n << " "; }

int main() {
    int n;

    
    cout << "Enter the number of natural numbers to print: ";
    cin >> n;

    
    cout << "The first " << n << " natural numbers are: ";
    printNaturalNumbers(n);
    cout << endl;

    return 0;
}
