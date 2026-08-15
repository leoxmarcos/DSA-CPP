// print 1 to n
#include<iostream>
using namespace std;

// void print(int num,int N)
// {
//     if(num==N){
//        cout<<num<<endl;
//        return;
//     }
//   cout<<num<<endl;
//   print(num+1,N);
// }

// int main()
// {
//   int N;
//   cin>>N;
//   print(1,N);
// }


// ONLY ONE ARGUMENT
void print( int N)
    {
        if (N==1)
        {
            cout<<1<<endl;
            return;
        }
        
        // print( N-1);
        cout << N << endl;
     
    }

    int main()
    {
      int N;
      cin>>N;
      print(N);
    }