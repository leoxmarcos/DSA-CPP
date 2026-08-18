// //Fibonacii series
// #include<iostream>
// using namespace std;
// int fib(int n){
//     if(n<=1){
//         return n;
//     }
//  return fib(n-1)+ fib(n-2);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cout<<fib(i)<<" ";
//     }
// }

// Nth Stair
// #include<iostream>
// using namespace std;
// int totalway(int n){
//     if(n<=1){
//         return n;

//     }
//     return totalway(n - 1) + totalway(n-2);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout << totalway(n);
// }

//GCD USING RECUSSION

#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0){
        // cout<<a;
        return a;
    }
    return gcd(b,a%b) ;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
}