// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Entre the value of n: ";
//     cin>>n;
//     for (int i = 1; i <=n; i++)
//     {
//         for (int j =1; j <=n-i; j++)
//         {
//             cout<<"  ";
//         }
//         for (int j = 1; j <= 2*i-1; j++)
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
//     cout<<"Entre the value of n: ";
//     cin>>n;
//      for (int i = 1; i <= n; i++)
//      {
//         for (int j = 1; j<=n-i; j++)
        
//             cout<<"  ";
        
//         for (int j = 1; j <=i; j++)
        
//            cout<<j<<" ";
        
//         for (int j=i-1; j>=1; j--)
        
//             cout<<j<<" ";
        
        
//         cout<<endl;
        
        
        
//      }
     
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Entre the value of n: ";
//     cin>>n;
//     for (int i = n; i >= 1; i--)
//     {
//        for (int j = 1; j<=n-i; j++)
       
//          cout<<"  ";
       
//        for(int j=1; j<=2*i-1;j++)
//         cout<<"* ";
       
//        cout<<endl;
//     }
    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Entre the value of n: ";
//     cin>>n;
//     for (int i =  n; i >=1; i--)
//     {
//         for (int j =1; j<=i; j++)
//         {
//             cout<<"* ";
//         }
//         for (int j = 1; j <=2*n-2*i; j++)
//         {
//             cout<<"  ";
//         }
//         for (int j = 1; j<=i; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
    
//      for (int i =  1; i <=n; i++)
//     {
//         for (int j =1; j<=i; j++)
//         {
//             cout<<"* ";
//         }
//         for (int j = 1; j <=2*n-2*i; j++)
//         {
//             cout<<"  ";
//         }
//         for (int j = 1; j<=i; j++)
//         {
//             cout<<"* ";
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
//        for (int i =  1; i <=n; i++)
//     {
//         for (int j =1; j<=i; j++)
//         {
//             cout<<"* ";
//         }
//         for (int j = 1; j <=2*n-2*i; j++)
//         {
//             cout<<"  ";
//         }
//         for (int j = 1; j<=i; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

//        for (int i =  n-1; i >=1; i--)
//     {
//         for (int j =1; j<=i; j++)
//         {
//             cout<<"* ";
//         }
//         for (int j = 1; j <=2*n-2*i; j++)
//         {
//             cout<<"  ";
//         }
//         for (int j = 1; j<=i; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
   
# include<iostream>
   using namespace std;
   int main(){
    int n;
    cout<<"Entre the value of n: ";
    cin>>n;
   for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n-i; j++)
        {
            cout<<" ";

        }
        for (int j = i; j >=1; j--)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

     for (int i = n; i>=1; i--)
    {
        for (int j = 1; j <=n-i; j++)
        {
            cout<<" ";

        }
        for (int j = i; j >=1; j--)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
}
