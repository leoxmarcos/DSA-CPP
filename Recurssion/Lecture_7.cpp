//linear search

// #include<iostream>
// using namespace std;
// bool linearsearch(int arr[],int x, int index,int n)
// {
//     if(index==n){
//         return 0;
//     }
//     if(arr[index]==x)
//     return 1;
//     return linearsearch(arr,x,index+1,n);
// }

// int main(){
//     int arr[]={2,3,7,4,11,8,12};
//     int x=5;
//     cout<<linearsearch(arr,x,0,6)<<endl;
// }


//Binary Search
#include<iostream>
using namespace std;
bool Binarysearch(int arr[],int start,int end,int x)
{
    if(start>end){
        return 0;
    }
    int mid=start+(end-start)/2;
    if(arr[mid]==x)
    return 1;
    else if(arr[mid]<x)
    return Binarysearch(arr,mid+1,end,x);
    else{
        return Binarysearch(arr,start,mid-1,x);
    }
}

int main(){
    int arr[]={2,4,6,8,10,12};
    int x=0;
    cout<<Binarysearch(arr,0,5,x);
}


