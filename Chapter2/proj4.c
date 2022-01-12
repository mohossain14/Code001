// tax code 

#include <stdio.h>

int main(void){
    float amount, total;

    printf("Enter the amount of money you owe: ");
    scanf("%f", &amount);

    total = amount + (amount * .05f);

    printf("Your total with tax added is: $%.2f\n", total);

    return 0;
}