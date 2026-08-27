// Print the element of array

// #include<iostream>
// using namespace std;

// void print(int arr[],int index, int n){
//     if(index==n)
//     return ;

//     cout<<arr[index]<<" ";
//     print(arr,index+1,n);
// }

// int main()
// {
//     int arr[]={3,4,1,2,8};
//     print(arr,0,5);
// }



// Reverse Arrya
// #include<iostream>
// using namespace std;

// void print(int arr[],int index, int n){
//     if(index==n)
//     return ;

   
//     print(arr,index+1,n);
//     cout << arr[index] << " ";
// }

// int main()
// {
//     int arr[]={3,4,1,2,8};
//     print(arr,0,5);
// }


//Print the array if the pointer is at last index of an array

// #include <iostream>
// using namespace std;

// void print(int arr[], int index)
// {
//     if(index==-1)
//     return;    
    
//    cout<<arr[index]<<" ";
//    print(arr,index-1);
// }

// int main()
// {
//     int arr[] = {3, 4, 1, 2, 8};
//     print(arr, 4);
// }

// Print the array if the pointer is at last index of an array and revese it starting from index 1

#include <iostream>
using namespace std;

void print(int arr[], int index)
{
    if(index==-1)
    return;

  
   print(arr,index-1);
   cout << arr[index] << " ";
}

int main()
{
    int arr[] = {3, 4, 1, 2, 8};
    print(arr, 4);
}
