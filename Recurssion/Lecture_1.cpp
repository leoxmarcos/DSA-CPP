#include<iostream>
using namespace std;
// int main(){
//     int n=5;
//     for(int i=n;i>0;i--)
//     {
//         cout<<i<<"days left for birthday\n";
//     }
//     cout<<"Happy birthday\n";
// }


// void fun3(int n)
// {
//     cout<< n << "days left for birthday"<<endl;
// }
// void fun2(int n)
// {
//     cout << n << "days left for birthday"<<endl;
// }
// void fun1(int n)
// {
//     cout << n << "days left for birthday"<<endl;
// }
// void fun0(int n)
// {
//     cout << n << "Happy birthday"<<endl;
// }
// int main(){
// int n=3;
//     fun3(3);
//     fun2(2);
//     fun1(1);
//     fun0(0);
// }




// void fun0(int n)
// {
//     cout << n << "Happy birthday"<<endl;
// }
// void fun1(int n)
// {
//     cout << n << "days left for birthday" << endl;
//     fun0(0);
// }
// void fun2(int n)
// {
//     cout << n << "days left for birthday" << endl;
//     fun1(n - 1);
// }
// void fun3(int n)
// {
//     cout << n << "days left for birthday" << endl;
//     fun2(n - 1);
// }
// int main(){
// int n=3;
// fun3(3);
// }



void fun3(int n)
{
    if(n==0)
    {
        cout<<"Happy Birthday\n";
        return;
    }
    cout<<n<<"days left for birthday\n";
    fun3(n-1);
}
int main()
{
    int n=3;

    fun3(8);
}
