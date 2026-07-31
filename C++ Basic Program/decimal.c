#include<stdio.h>

int main()
{

int n,de;

printf("enter the decimal number = ");

scanf("%d",&n);

if(n==0)
{
printf("binary = %d",n);
}
else{
    while (n>0)
    {
        
        printf("%d" ,n%2);
        n=n/2;
    }
  return 0;  
 }
}