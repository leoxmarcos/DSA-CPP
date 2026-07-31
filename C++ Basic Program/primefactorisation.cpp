#include <iostream>
using namespace std;

int main () {
    int a, b ,i, primenumber;

    cout<< " Please entre any number to find prime factor:";
    cin>> a;
    if (a == 2){
        cout<<"this is a prime number ";
    }
    else{
        for (  i = 2 ; i<a; i++)
    {
        
        if(a%i == 0)

        { 
            b = 0 ;
            cout<<"this is not a prime number"<<endl;
            break;
        }
        else{
            b=1 ;
        }

    }
    if (b == 1){
        cout<<"this is a prime number" ;
    }

    }
    
    return 0;

}