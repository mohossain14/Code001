#include <stdio.h>

int main(void){
    int digit; //first you need to read in a number 
    int num1, num2;

    printf("Enter a two-digit number: "); 
    scanf("%d", &digit); //then you need to scan it in

    num1 = digit % 10; //mod 10 gives us the second digit
    num2 = digit / 10; //while dividing by 10 gives us the first digit

    printf("The reversal is: %d%d", num1, num2); //print out the result
}