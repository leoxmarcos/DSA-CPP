// #include<iostream>
// using namespace std;
// int search(int arr[], int N, int X)
// {
//     for (int i = 0; i <N ; i++)
//     {
//         if(arr[i]==X)
//         return i;
//     }
//      return -1;
    
// }

// REVERSE ARRAY
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6]={1,2,3,4,5};
//     int start=0, end =4;
//     while (start<end)
//     {
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
//     for(int i=0;i<5;i++)
//         cout<<arr[i]<<" ";
// }
 //SECOND MAXIMUM NUMBER

//  #include<iostream>
//  #include<climits>
//  using namespace std;
//  int main(){
//       int arr[20],N;
//       cout<<"entre the size of array: ";
//       cin>>N;
//       cout<<"Entre the element in Array: "<<endl;
//       for (int i = 0; i <N; i++)
//       {
//         cin>>arr[i];
//       }
//       int ans=-1;
//       for (int i = 0; i <N; i++)
//       {
//         if (arr[i]>ans)
//         {
//             ans=arr[i];

//         }
//     }
//         int second=-1;
//         for (int i = 0; i < N; i++)
//         {
//           if (arr[i]!=ans)
//           {
//              second=max(second,arr[i]);
//           }
//         }
//           cout<<second<<endl;
        
//     }
      

// MISSING OF ELEMENT IN ARRAY
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[20],N;
//     cout<<"entre the size of array: ";
//     cin>>N;
//     cout<<"Entre the element in array: ";
//     for (int i = 0; i < N; i++)
//     {
//         cin>>arr[i];
//     }
//     int sum=0;
//     for (int i = 0; i < N-1; i++)
    
//         sum+=arr[i];
//     int ans=(N*(N+1))/2;

// cout<<"MISSING ELEMENT: "<<ans-sum;
    
// }
 
//FIBONACCI SERIES
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Entre the Number: ";
//     cin>>n;
//     int arr[1000];
//     arr[0]=0;
//     arr[1]=1;
//     for (int i = 2; i <=n-1; i++)
//     {
//     arr[i]=arr[i-1]+arr[i-2];
//     }
//     cout<<arr[n-1];
// }

// ROTATE OF ARRAY

// #include<iostream>
// using namespace std;
//  void fun(int a[], int n)
//  {
//     cout<<sizeof(a)<<endl;
//     for (int  i = 0; i <n; i++)
    
//         cout<<a[i]<<" ";
    
    
//  }
// int main(){
//     int arr[5]={3,4,1,6,7};
//     cout<<sizeof(arr)<<endl;
//     fun(arr,5);
// }


