#include<iostream>
// using namespace std;
// bool prime(int n){
//     if(n<2);
//     return 0;
//     for (int i = 2; i < n; i++)
//     {
//         if(n%i==0)
//         return 0;
//     }
//     return 1;
// }
// int fact(int n){
//     int ans=1;
//     for (int i = 1; i <= n; i++)
//     {
//        ans=ans*i;
//     }
//      return ans;
// } 
//  int main(){
//     int a,b;
//     cout<<"ente the value of a: ";
//     cin>>a;
//     cout<<"entre the value of b: ";
//     cin>>b;
//     cout<<prime(a);
//     cout<<endl;
//     cout<<prime(b);
//       cout<<endl;
//     cout<<fact(a);
//       cout<<endl;
//     cout<<fact(b);
//       cout<<endl;
//     cout<<prime(b-a);
//       cout<<endl;
//      cout<<fact(b-a);

//  }
   
// #include<iostream>
// using namespace std;
// int sum(int a, int b){
//     int ans=a+b;
//     return ans;
// }
// int main(){
//     int n,m;
//     cout<<"entre the value of n: ";
//     cin>>n;
//     cout<<"entre the value of m: ";
//     cin>>m;
//     cout<<sum(n,m);
// }
///swap is also a inbuild function
#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int c=a;
    a=b;
    b=c;
}
int main(){
    int n,m;
    cin>>n>>m;
    swap(n,m);
    cout<<n<<" "<<m<<" ";
}
//function overloading 
//mutiple function
//pass by refernce
//pass by value