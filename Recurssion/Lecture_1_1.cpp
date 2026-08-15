//print n to 1 recusively
#include<iostream>
using namespace std;

void print (int n)
{  
     if(n==2){
        cout<<2<<endl;
        return;
     }

    cout<<n;
    print(n-2);
}

void print(int n)
{   
    if(n==1){
        cout<<1<<endl;
        return;
    }
    cout<<n<<endl;
    print(n-1);

}

int main(){
    int n=10;
    print(n);
}

///print even number n to 1 