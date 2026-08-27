// #include<iostream>  Normal methode to print sum of array
// using namespace std;

// int sum (int arr[] ,int index){
//     return arr[index];
      
// }

// int main(){
//     int arr[]={3,4,1,2,8};
//     int total=0;
//     for(int i=0;i<5;i++)
//     total+=sum(arr,i);
//     cout<<total;

// }

//Using Recussion print the Sum
// #include<iostream>
// using namespace std;

// int sum(int arr[],int index, int n )
// {
//     if(index==n){
//         return 0;
//     }
//     return arr[index]+sum(arr,index+1,n);
// }

// int main()
// {
//     int arr[]={3,4,1,2,8};
//     cout<<sum(arr,0,5);
// }


//Minmum Element using recurssion

// #include<iostream>
// using namespace std;

// int minelement(int arr[], int index)
// {
//     return arr[index];
// }

// int main()
// {
//     int arr[]={3,4,1,2,8};
//     int num =arr[0];
//     for(int i=0;i<5;i++)
//     {
//         num=min(num,minelement(arr,i));
//     }
   
//     cout<<num;
// }

#include<iostream>
using namespace std;

int minelement(int arr[],int index , int n)
{
    if(index==n-1){
        return arr[index];
    }
    return max(arr[index],minelement(arr,index+1,n));
}

int main(){
    int arr[]={3,4,1,2,8};

    cout<<minelement(arr,0,5);
}