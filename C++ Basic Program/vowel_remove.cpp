#include <iostream>
#include <cstring> // For strlen
using namespace std;

int main() {
    char str[100]; 
    cout << "Enter a string: ";
    cin.getline(str, 100); 

    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'}; 
    int vowelCount = 0; 

    
    for (int i = 0; i < strlen(str); i++) {
       
        for (int j = 0; j < 10; j++) {
            if (str[i] == vowels[j]) {
                vowelCount++;
                break; 
            }
        }
    }

    cout << "Number of vowels: " << vowelCount << endl;
    return 0;
}
