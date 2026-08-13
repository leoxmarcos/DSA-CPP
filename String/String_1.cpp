#include<iostream>
using namespace std;

int main()
{
    char arr[]={'a','p','p','l','e'};
    for (int i=0;i<5;i++)
    cout<<arr[i];


    char arr[10];//last place is reserve for null charater

    cin>>arr;
    arr[2]='\0';// null character at second place
    cout<<arr;

//     // string s= "Parth";
//     // cout<<s;

//     // string s;
//     // getline(cin,s);// print the entire sentence
//     // cout<<s;

//     // string s;
//     // getline(cin,s);
//     // cout<<s<<endl;
//     // cout<<s.size();//it also count the space 


//     //Append operation
//     // string s1="Parth" , s2="Singh";
//     // // s1.push_back('p');
//     // s1.pop_back();
//     // string s3 =s1.append(s2);
//     // cout<<s1<<endl;
//     // cout<<s3<<endl;

//   //Escape Character

//   string s="Parth is a \"Good\" boy";
//   string s1="\\0";
//   cout<<s1<<endl;
//   cout<<s<<endl;

// }