// Double Pointer
// #include<iostream>
// using namespace std;

// int main(){

// int n =10;
// int *p =&n; //Single pointer
// int **p2=&p;//Double pointer
// int ***p3= &p2;//Triple pointer
// // cout<<p<<endl;
// // cout<<&p<<endl;
// // cout<<p2<<endl;
// // cout << &p2 << endl;
// // cout << p3 << endl;

// //How to modify value

// *p=*p+5;
// cout<<n<<endl;
// }


// #include<iostream>
// using namespace std;

// void fun(int *p)
// {
//     *p+*p+10;
// }

// int main()
// {
//     int  n=10;
//     int *p=&n; // Single Pointer
//     int**p2 =&p;// Double Pointer

//     cout<<p<<endl;
//     fun(p);
//     cout<<p<<endl;

// }
#include<iostream>
using namespace std;

// int main(){
//     int *ptr;
//     int x=0;
//     ptr=&x;
//     int y =*ptr;
//     *ptr=1;
//     cout<<x<<" "<<y<<endl;
// }



//     int main(){
//     int a=5,b=10; 
//     int &name =a;
//     int *ptr =&a;
//     (*ptr)++;
//     ptr=&b;
//     *ptr=*ptr+5;
//     name+=5;
//     cout<<a<<" "<<b;
// }




// int four(int x, int *py,int **ppz)
// {
//     int y,z;
//     **ppz+=1; z=**ppz;
//     *py+=2; y=*py;
//     x+=3;
//     return x+y+z;
// }
  
// int main(){
//     int c,*b,**a;
//     c=4;b=&c; a=&b;
//     cout<<four(c,b,a);
// }


// 



int main(){
    int n=10;
    int *p=&n;
    int **q=&p;
    cout<<p<<endl;
}
