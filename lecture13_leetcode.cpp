// #include <iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Entre the value of num: ";
//     cin>>num;
//     while (num>9)
//     {
//         int ans=0,rem;
//         while (num!=0)
//         {
//             rem=num%10;
//             num/=10;
//             ans=ans+rem;
//         }
//         num=ans;
//         cout<<endl;
//        cout<<num;   
//     }
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int x,rem,ans=0;
//     cout<<"Entre the value of x: ";
//     cin>>x;
//     while (x!=0)
//     {
//         rem=x%10;
//         x/=10;
//         ans=ans*10+rem;
//     }
//     cout<<ans;
// }

// #include <iostream>
// using namespace std;
// int main(){
//    int x;
//    cin>>x;
//        if(x<0)
//          return 0;
//          int num=x,rem,ans=0;
//          while(num){
//             rem=num%10;
//             num/=10;
//             ans=ans*10+rem;
//          }
//          if(ans==x)
//          cout<<"yes";
//          else
//          cout<<"no";
//     }

#include<iostream>
using namespace std;
int main(){
    int n, ans=0, rem,mul=1;
    cout<<"entre the value of n: ";
    cin>>n;
    if(n==0)
    cout<<1;
    while (n>0){
    rem=n%2;
    rem=rem^1;
    n=n/2;
    ans=ans+rem*mul;
}
cout<<ans;
}