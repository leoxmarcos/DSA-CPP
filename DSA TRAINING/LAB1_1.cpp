// #include<iostream>
// using namespace std;
// void sumdigit(int n ,int k){
//     int sum=0;
//     while(n>0){
//         sum +=n%10;
//         n/=10;
//     }
//     sum=sum*k;

//     while(sum>=10){
//         int a=0;
//         while (sum > 0)
//         {
//             a += sum % 10;
//             sum /= 10;
//         }
//         sum=a;
//     }
//     cout<<"OUTPUT: "<<sum;

// }

// int main(){
//     int n,k;
//     cin>>n>>k;
//     sumdigit(n,k);
//     return 0;
// }

//optimal methode
#include<iostream>
using namespace std;
int main(){

    int n,k;
    cin>>n>>k;
    int sum1=n%9!=0 ? n%9:9;
    sum1=sum1*k;
    if(sum1 % 9!=0)
    cout<<sum1%9;
    else
       cout<<9;
}