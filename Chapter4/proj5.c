// redo upc.c program but instead have it only read in the whole 11 digits at once

#include <stdio.h>

int main(void){
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11;
    int sum1, sum2, total;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &num1, &num2, &num3, &num4,  &num5, &num6, &num7, &num8, &num9, &num10, &num11);

    sum1 = num1 + num3 + num5 + num7 + num9 + num11;
    sum2 = num2 + num4 + num6 + num8 + num10;
    total = 3 * sum1 + sum2;

     printf("Check digit: %d\n", 9 - ((total - 1) % 10));




}