#include <stdio.h>

int main(void){
    int digit, dig1; //first you need to read in a number 
    int num1, num2, num3;

    printf("Enter a three-digit number: "); 
    scanf("%d", &digit); //then you need to scan it in

    num1 = digit / 100; //divide by 100 to get the first digit
    dig1 = digit % 100; //break off the remainder into its own var
    num2 = dig1 / 10; //divide to get tenth place
    num3 = dig1 % 10; //take modulo to get ones place

    printf("The reversal is: %d%d%d", num3, num2, num1); //print out the result
}