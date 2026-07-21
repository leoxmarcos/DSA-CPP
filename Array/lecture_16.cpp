// #include<iostream>
// using namespace std;

// int main(){
//     int arr[6];
//     for(int i=0;i<6;i++)
//     cin>>arr[i];
    
//     for(int i=0;i<6;i++)
//     cout<<arr[i]<<" ";
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cin>>size;
//     int arr[1000];
//     for(int i=0;i<size;i++)
//     cin>>arr[i];
//     for(int i=0;i<size;i++)
//     cout<<arr[i]<<" ";
//     return 0;

// }

#include<iostream>
#include<climits>
using namespace std;
int main(){
        int arr[5]={3,56,78,94,4};
        int ans=INT_MAX;
        for(int i=0;i<5;i++){
            if (arr[i]<ans)
            ans=arr[i];
        }
        cout<<"MIN ELEMENT: "<<ans<<endl;

        ans=INT_MIN;
        for(int i=0;i<5;i++){
            if (arr[i]>ans)
            ans=arr[i];
        }
         cout<<"MAX ELEMENT: "<<ans;


        return 0;



}