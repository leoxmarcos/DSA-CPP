#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int * ptr =arr;
    //Print the address of first element
    // cout<<arr<<endl;
    // cout<<arr+0<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<ptr<<endl;


    // // Print the address of second element or 1 index
    // cout << arr + 1<< endl;
    // cout << &arr[1] << endl;

    // //Print the value of 0 index

    // cout<<arr[0]<<endl;
    // cout<<*arr<<endl;
    // cout<<*(arr+0)<<endl;
    // cout<<*ptr<<endl;

    // // Print all the address

    // for (int i=0;i<5;i++)
    // cout<<arr+i<<endl;

    // //Print all the value;

    // for (int i = 0; i < 5; i++)
    //     cout << *(arr + i) << endl;

        //Print all the values

        for (int i=0;i<5;i++)
        cout<<ptr+i<<endl;

        // //Arithmatic operation ptr++,ptr--,ptr=ptr+1
        // //Print all the value
        //         for(int i =0;i<5;i++)
        // {
        //     cout<<*ptr<<" ";
        //     ptr++;
        // }
      

        // Addition
        ptr= ptr+3;
        cout<<*ptr<<endl;

        ptr= ptr-2;
        cout<<*ptr<<endl
}