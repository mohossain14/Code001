//write a program that calculates the number of digits in a number and

#include <stdio.h>

int main(void){
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    if (num < 9){ //the conditionals checks against the highest number in the tier to determine digit count//
        printf("The number %d has 1 digits", num);
    }
    else if (num < 99){
        printf("The number %d has 2 digits", num);
    }
    else if (num < 999){
        printf("The number %d has 3 digits", num);
    }
    else if (num < 9999){
        printf("The number %d has 4 digits", num);
    }
}