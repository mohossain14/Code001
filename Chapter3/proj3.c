//ISBN code identifier

#include <stdio.h>

int main(void){
    int gsi, country, publisher, itemNumber, checkDigit;

    printf("Enter the ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gsi, &country, &publisher, &itemNumber, &checkDigit);

    printf("GSI prefix: %d\n", gsi);
    printf("Group identifier: %d\n", country);
    printf("Publisher code: %d\n", publisher);
    printf("Item number: %d\n", itemNumber);
    printf("Check digit: %d\n", checkDigit);
}