#include<stdio.h>
void main(){
    float a,b,c;
    int input;
    printf("Press 1 for addition,2 for subtraction,3 for multiplication,4 for division ");
    scanf("%d",&input);
    printf("entre first number and second number : ");
    scanf("%f %f",&a,&b);
    switch (input)
    {
    case 1:
       c=a+b;
       printf("sum=%f",c);
        break;
        case 2:
       c=a-b;
       printf("sub=%f",c);
        break;
        case 3:
       c=a*b;
       printf("mult=%f",c);
        break;
        case 4:
       c=a/b;
       printf("div=%f",c);
        break;
    
    default:
    printf("wrong input");
        break;
    }
}