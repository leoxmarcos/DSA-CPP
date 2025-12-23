// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"entre the value of n: ";
//     cin>>n;
//     for (int i = 1; i <=n; i++)
//     {
//         for (int j = i; j >= 1; j--)
//         {
//             cout<<j<<" " ;
//         }
//         cout<<endl;
//     }
    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Entre the value of n: ";
//     cin>>n;
//     for (int i = 1; i <=n; i++)
//     {
//         for (int j = 1; j<=i; j++)
//         {
//             cout<<char(i+96)<<" ";
//         }
//         cout<<endl;
//     }
    
// }

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Entre the value of n: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j=n-(i-1); j>=1;j--)
        {
          cout<<j<<" ";
            
        }
        cout<<endl;
    }
    
}


#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Entre the value of n: ";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for(int j=n; j>=n-(i-1);j--)
        {
            cout<<j<<" ";

        }
        cout<<endl;
    }
    
}