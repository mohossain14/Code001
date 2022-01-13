//write a program that formats product information entered by the user into

#include <stdio.h>

int main(void){
    int item, month, day, year; //initialze variables to be used
    float price;

    printf("Enter item number: ");
    scanf("%d", &item); //scan in all the variables from the user
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date: ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase Date\n"); //print out in the format specified in the prompt
    printf("%d\t\t$ %2.2f\t\t%d/%d/%d", item, price, month, day, year);
}