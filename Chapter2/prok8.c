//program that calculates the monthly loan balance

#include <stdio.h>

int main(void){
    float loan, interestRate, monthlyPayment;
    float monthRate, tot1, tot2, tot3;

    printf("Enter the amount of the loan: "); //scan in the parameters we need
    scanf("%f", &loan);
    printf("Enter the interest rate: ");
    scanf("%f", &interestRate);
    printf("Enter monthly payments: ");
    scanf("%f", &monthlyPayment);

    monthRate = (interestRate / 100.0f) / 12.0f; //calculate the monthly interest rate by converting to percetnage and then dividing my total months in a year

    tot1 = (loan - monthlyPayment) + ((loan - monthlyPayment) * monthRate); //we find the balance by first subtracting the monthly payments but then findign the interest and adding it the the total balance left
    tot2 = (tot1 - monthlyPayment) + ((tot1 - monthlyPayment) * monthRate);
    tot3 = (tot2 - monthlyPayment) + ((tot2 - monthlyPayment) * monthRate);

    printf("Balance remaining after first payment: %.2f\n", tot1); //print out the results
    printf("Balance remaining after second payment: %.2f\n", tot2);
    printf("Balance remaining after third payment: %.2f\n", tot3);

    return 0;
}