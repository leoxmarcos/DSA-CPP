// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Entre the the value of n: ";
//     cin>>n;
//     for (int i = 1; i <=n; i++)
//     {
//         for (int j = 1; j <=n-i; j++)
//       
 // {
//             cout<<"  ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<" *";
//         }
//         cout<<endl;
//     }
    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"entre the value of n: ";
//     cin>>n;
//     for (int  i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= (n-i); j++)
//         {
//             cout<<"  ";
//         }
//         for (int j  = 1; j <=i; j++)
//         {
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
    
//}
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Entre the value of n: ";
//     cin>> n;
//     for(int i=1; i<=n; i++)
//     {
//         for (int j = 1; j <=n-i; j++)
//         {
//             cout<<"  ";
//         }
//         for (int j = 1; j <=i; j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"entre the value of n: ";
//     cin>>n;
//     for (int i = 1; i <=n; i++)
//     {
//         for (int j = 1; j <=n-i; j++)
//         {
//             cout<<"  ";

//         }
//         for (int j = 1; j <=i; j++)
//         {
//             cout<<char(j+64)<<" ";
//         }
//         cout<<endl;
//     }
    
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"entre the value of n: ";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n-i; j++)
        {
            cout<<"  ";

        }
        for (int j = i; j >=1; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}