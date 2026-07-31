#include <iostream>
using namespace std;

int main() 
{
    int a=5 ,b=9 ,c;
    cout << " BEFORE SWAPPING THE a ="<< a <<" , b=  " << b << endl;

  
    c = a;
    a = b;
    b = c;
    cout << "After swapping a = " << a << " , b = " << b<< endl;

    return 0;
} 
