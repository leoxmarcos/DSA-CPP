// #include<iostream>//Factorial of a number recurssion
// using namespace std;

// int fact(int n){
//     if(n==1|| n==0){
//         return 1;
//     }
//     return n*fact(n-1);
// }

// int main(){
//     int n;
//     cin>>n;
//     if(n<0){
//         cout<<"Factorial is not possible\n";
//         return 0;
//     }
//     cout<<fact(n);
   
// }

//sum of n natural number using recurssion
// #include<iostream>
// using namespace std;

// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     return n+sum(n-1);
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<sum(n);
// }


//Power of 2

// #include<iostream>
// using namespace std;

// int pow(int num ,int n){
//     if(n==1)
//     {
//         return num;
//     }
//     return num * pow(num,n-1);
// }

// int main()
// {
//     int num,n;
//     cin>>num>>n;
//     cout<<pow(num,n);
// }

//sum of square of N number recurssion
#include<iostream>
using namespace std;
int sumsquare(int n){
    if(n==1){
        return 1;
    }
    return (n*n)+sumsquare(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<sumsquare(n);
}