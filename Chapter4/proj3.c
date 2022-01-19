//redo project 2 but do it without needing the arithmetic method
#include <stdio.h>

int main(void){
    int num1, num2, num3;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &num1, &num2, &num3); //if you just use %d it scans in the whole # so therefore 1d tells it to only read a single digit

    printf("The reversal is: %d%d%d", num3, num2, num1);

    return 0;
}