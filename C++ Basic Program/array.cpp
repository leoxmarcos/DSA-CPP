// #include  <iostream>
// using namespace std;
// int main(){
//     int arr[6];// array delcared
//     for(int i=0;i<6;i++)
//     cin>>arr[i];
   
//     for (int i = 0; i <6; i++)
    
//          cout<<arr[i]<<" ";
    
    

//     return 0;
// } 

#include  <iostream>
using namespace std;
int main(){
    int arr[5]={1,5,8,9,7};
    int ans =INT16_MAX;
    for (int i = 0; i<5; i++)
    {
       if(arr[i]<ans)
       ans = arr[i];
    }
    

}