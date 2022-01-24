//calculate the number of digits in an integer 

#include <stdio.h>

int main(void){
    int digits = 0, n;

    printf("Enter a nonnegative integer: ");
    scanf("%d", &n);

    do{ //use do statement since we dont know the number of divisions are required
        n /= 10;
        digits++;
    } while (n > 0);

    printf("The number has %d digit(s).\n", digits);
    return 0;
}