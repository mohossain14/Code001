//write a program that takes amounts and divides it to find the total needed to pay

#include <stdio.h>

int main(void){
    int total, twenty, ten, five, one; //need to declare the variables in use

    printf("Enter the dollar amount you've spent: ");
    scanf("%d", &total);

    twenty = total / 20; //to find number of bills just divide by the amount
    total = total - (20 * twenty); //then modify the total amount for the next amount since we dont need to consider 20 bills anymore

    ten = total / 10; //repeat the process
    total = total - (10 * ten);

    five = total / 5;
    total = total - (5 * five);

    one = total / 1;
    
    printf("$20 bills: %d\n", twenty); //print out all the expected results
    printf("$10 bills: %d\n", ten);
    printf("$5 bills: %d\n", five);
    printf("$1 bills: %d\n", one);


}