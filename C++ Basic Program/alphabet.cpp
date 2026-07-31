#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<< " ENTRE THE VALUE :";
    cin>> num;

    if (num >=0  && num <=25)
    {
        char alphabet = 'a' + num;
        cout<< "THE ALPHABET IS : " << alphabet << endl;

    }
    
    return 0;
    
}
