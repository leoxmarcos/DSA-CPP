#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    scanf("%f", &fahrenheit);

    if (fahrenheit > 1000.00 && fahrenheit < 10001.00) {
       
        celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
        
        printf("%.2f\n", celsius);
    } else {
        
        printf("Input out of bounds\n");
    }

    return 0;
}
