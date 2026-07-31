#include <iostream>
using namespace std;

int main()
{
    char c;
    cout<< "entre a character";
    cin >> c;
    int asciivalue = (int)c; /*(int)c is a type cast operation. 
                            it convert the character c (of type char) into its ascii integer value*/ 

    cout<< " the ascii value of character " << c << "is" << asciivalue << endl;

    return 0;
} 
  