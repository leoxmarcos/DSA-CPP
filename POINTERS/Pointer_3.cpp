#include<iostream>
using namespace std;



// int main()
// {
//     // char arr[5]="1234";
//     // char *ptr=arr;
//     // cout<<arr<<endl;
//     // cout<<ptr<<endl;
//     // cout<<*ptr<<endl;
//     // cout<<(void*)arr<<endl;
//     // cout << (void *)ptr << endl;
 

//     // address of the value...
//     // char name='a';
//     // char *ptr=&name;
//     // cout<<(void*)&name<<endl;
//     // cout<<(void*)ptr<<endl;
     
    

// }




// void dob(int *p){
//     for(int i=0;i<5;i++)
//     p[i]=2*p[i];
// }

//  int main()
//  {
//     int arr[5]={1,2,3,4,5};

//     dob(arr);
//     for(int i=0;i<5;i++)
//     cout<<arr[i]<<" ";
//  }

//Pass by pointer

// void incr(int *ptr)
// {
//     *ptr =*ptr+1;
// }

// int main()
// {
//     int num=10;
//     int temp=num;
//     incr(&num);
//     cout<<num;
// }

//Swapping of two number using pointers

// void swapping(int *p1, int*p2)// pass by pointer
// {
//     int temp= *p1;
//     *p1=*p2;
//     *p2=temp;
// }

// int main()
// {
//     int first=10;
//     int second=20;
//     cout<<first<<" "<<second<<endl;
//     swapping (&first,&second);
//     cout<<first<<" "<<second<<endl;
// }

// Swapping of value using pass by reference

void swapping(int &p1, int &p2)
{
    int temp =p1;
    p1=p2;
    p2=temp;
}
 void pass(vector<int>temp)
 {
    for (int i=0;i<5;i++)
    temp[i]=20;
 }


int main()
{
    // int num=10;
    // int &temp=num;
    // cout<<temp<<endl;
    // temp++;
    // cout<<num;
    // cout<<&temp<<endl;
    // cout<<&num;

    // int first = 10;
    //     int second=20;
    //     cout<<first<<" "<<second<<endl;
    //     swapping (first,second);
    //     cout<<first<<" "<<second<<endl;

    vector<int>v(5,0);
     pass(v);
   for(int i=0;i<5;i++)
   cout<<v[i]<<" ";
     
    }

