// #include<iostream>
//  using namespace std;
//  int main(){
//    char name;
//    for (name='a';name<='z';name++)
//    {
//     cout<<name<<" ";
//    }
   
//  }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Entre the value of n: ";
//     cin>>n;
//     for (int i =n; i<=10*n; i=i+n)
//     {
//      cout<<i<<endl;   
// }
// }
// 

// #include<iostream>
// using namespace std;
// int main(){
//      int n;
//      cout<<"Entre the value of n: ";
//      cin>>n;
//      int sum=0;
//      for (int i = 1; i <=n; i++)
//      {
//         sum=sum+(i*i);
//      }
//      cout<<sum;
// }

// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"Entre the value of n: ";
//     cin>>n;
//     int fact=1;
//     for (int i = 1; i <=n; i++)
//     {
//         fact=fact*i;
//     }
//     cout<<fact;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Entre the value of n: ";
    cin>>n;
    if (n<2)
    {
        cout<<"NotPrime";
        return 0;

    }
    else{
        for (int i = 2; i <n; i++)
        {
            if (n%i==0)
            {
                cout<<"NotPrime";
                return 0;
            }
          
        }
       cout<<"PrimeNumber";
    }
}

