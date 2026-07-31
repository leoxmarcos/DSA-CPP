#include <iostream>
using namespace std;

int main() {
    int d, q, r, binary = 0, place = 1;
    cout<< "ENTRE A DECIMAL VALUE: ";
    cin >> d;
    q=d;
    while ( q != 0) {
        r = q % 2 ;
        binary += r * place;
        place  *= 10;
        q /= 2;


    }
    
    cout<< " the binary equivalent of " << d << " is " << binary << endl;
    return 0;
        
}