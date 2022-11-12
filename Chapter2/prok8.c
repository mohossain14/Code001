//write a program that calculates remaining balance 

#include <stdio.h>
#define MONTH 12

int main(void){
    float amount, rate, payment, rate2;

    printf("Enter loan amount: ");
    scanf("%f", &amount);
    printf("Enter the interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    rate2 = (rate / 100) / MONTH;

    amount = ((amount - payment) * rate2) + (amount - payment);
    printf("Balance remaing after first payment: %.2f\n", amount);
    amount = ((amount - payment) * rate2) + (amount - payment);
    printf("Balance remaing after second payment: %.2f\n", amount);
    amount = ((amount - payment) * rate2) + (amount - payment);
    printf("Balance remaing after third payment: %.2f\n", amount);

    return 0;
}