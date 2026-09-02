// Check Palindrom

// #include<iostream>
// using namespace std;

// bool checkpal(string str, int start ,int end)
// {   //base condition
//     if(start>=end)
//     return 1;
//     //not matched
//     if(str[start]!=str[end])
//     return 0;
//  //matched
//     else
//     return checkpal(str,start+1,end-1);
// }
// int main()
// {
//     //check Palindome
//     string str = "naman";
//     cout<<checkpal(str ,0,4)<<endl;

// }



//Count Vowels
// #include<iostream>
// using namespace std;
// int count(string str, int index ){
//     if(index==-1){
//         return 0;
//     }
//     //vowel hoga
//     if(str[index]=='a'|| str[index]=='e'|| str[index]=='i'|| str[index]=='o'||str[index]=='u'){
//         return 1+count(str,index-1);
//     }
//     //nhi hoga vowel
//     else
//     return count(str,index-1);
// }
// int main(){
//     string str="sara";
//     cout<<count(str,4)<<endl;
// }


// Reverse the String
// #include <iostream>
// using namespace std;
// void rev(string &str, int start ,int end){
//     if(start>=end){
//         return;
//     }
//     char c=str[start];
//     str[start]=str[end];
//     str[end]=c;
//     rev(str,start+1,end-1);


// }
// int main(){
//     string str ="Parth";
//     rev(str,0,4);
//     cout<<str<<endl;
// }

//LOWER TO UPPER CASE
#include<iostream>
using namespace std;
void lowertoupper(string &str,int index)
{
    if(index==-1)
    {
        return;
    }
    str[index]='A'+str[index]-'a';
    lowertoupper(str,index-1);
}
int main()
{
    string str ="parth";
    lowertoupper(str,4);
    cout<<str<<endl;
}
