//Reverse word in the string
#include <iostream>
#include <string>
using namespace std;
 string reverseWord(string s){
     string result="";
     string word="";
     for (int i = 0; i < s.length(); i++)
     {
         if (s[i]==' ')
         {
             result=word+" "+result;
             word="";
         }
         else{
             word+=s[i];
         }
         
     }
     result=word+" "+result;
     return result;
     
 }