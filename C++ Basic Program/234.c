#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int a, b , sum1 ,dif1;
    float x, y , sum2 , dif2;

  
    scanf("%d %d", &a, &b);

   
    scanf("%f %f", &x, &y);
    sum1 = a+b ;
    sum2 = roundf((x+y)*10)/10 ;
    dif1 = a-b ;
    dif2 = roundf((x-y)*10)/10 ;

  
        printf("%d %d\n", sum1, dif1);
 
        printf("%.1f %.1f\n",sum2 ,dif2 );
    

    return 0;
}
