// #include<iostream>
// using namespace std;

// int main()
// {
//     // Create an array to store address
//     int n,m;
//     cin>>n>>m;

//     int **ptr=new int *[n];

//     for (int i=0;i<n;i++){
//         ptr[i]=new int[m];
//     }

//     for (int i=0;i<n;i++)
//     for (int j=0;j<n;j++)
//     cin>>ptr[i][j];

//     //Print the value
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < n; j++)
//         cout<<ptr[i][j]<<" ";
//         cout<<endl;
//     }
//  //Released the memory heap

//  for(int i=0;i<n;i++)
//  delete[ ] ptr[i];

//  delete[] ptr;

// }

#include<iostream>
using namespace std;

int main()
{
    cin>>L>>B>>H;

    int ***ptr =new int**ptr[L];

    // CREATE 2D ARRAY 
    
    int L,B,H;
    cin>>L>>B>>H;

    int ***ptr =new int **ptr[L];
    // create 2d array

    for(int i=0;i<L;i++){
        ptr[i]=new int *[B];

        for(int j=0;j<B;j++)
    
    {
        ptr[i][j]=new int [H];
    }
}

  for (int i=0; i<L;i++)
 for (int j=0; i < B; j++)
 for (int k = 0; k < H; k++)
 ptr[i][j][k]=i+j+k;

  for (int i = 0; i < L; i++)
      for (int j = 0; i < B; j++)
          for (int k = 0; k < H; k++)
             cout<< ptr[i][j][k]<<" ";
}
