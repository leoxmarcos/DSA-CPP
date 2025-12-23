// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6];
//     for(int i=0;i<6;i++)
//     cin>>arr[i];

//     int index=-1;
//     int x;
//     cin>>x;
//     for(int i=0;i<6;i++){
//         if(arr[i]==x){
//             index=i;
//             break;
//         }
//     }
//     cout<<index;
// }

//REVERSE ARRAY

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6];
//     for(int i=0;i<6;i++)
//     cin>>arr[i];

//     int i=0,j=5;
//      while (i<j)
//      {
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//      }
//      for(int i=0;i<6;i++)
//      cout<<arr[i]<<" ";
     
// }

//SECOND LARGEST
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[7];
//     for(int i=0;i<7;i++)
//     cin>>arr[i];

//     int ans=INT_MIN;
//     for(int i=0;i<7;i++)
//     {
//         if(arr[i]>ans)
//         ans=arr[i];

//     }
//     int second=INT_MIN;
//     for(int i=0;i<7;i++){
//         if(ans!=arr[i])
//         second=max(second,arr[i]);
//     }
//     cout<<second;
// }


//MISSING NUMBER
// #include<iostream>
// using namespace std;
// int main(){
   
//     int arr[6];
//     for(int i=0;i<6;i++)
//     cin>>arr[i];
//    int n;
//     cin>>n;
//   int sum=0;
//   for(int i=0;i<n-1;i++)
//   sum+=arr[i];
   
//   int ans=n*(n+1)/2;
//   cout<<ans-sum;

// }

//fibonacci number

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Entre the number: ";
//     cin>>n;
    
//     int arr[1000];

//     arr[0]=0;
//     arr[1]=1;
//     for(int i=2;i<=n-1;i++)
//     arr[i]=arr[i-1]+arr[i-2];
//     cout<<arr[n-1];
// }

//ROTATE THE ARRAY
#include<iostream>
using namespace std;
int main(){
    int arr[6];
    for(int i=0; i<=6;i++)
    cin>>arr[i];
    int n;
    int last= arr[n-1];
    for(int i=n-2;i>=0;i--){
        arr[i+1]=arr[i];
        arr[0]=last;
         cout<<arr[i];

    }
}