#include <stdio.h>

int main(void){
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12;
    int sum1, sum2, sum3, total;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &num1, &num2, &num3, &num4,  &num5, &num6, &num7, &num8, &num9, &num10, &num11, &num12);

    sum1 = num2 + num4 + num6 + num8 + num10 + num12;
    sum2 = num1 + num3 + num5 + num7 + num9 + num11;
    sum3 = 3 * sum1 + sum2;
    sum3 = sum3 - 1;
    total = sum3 % 10; 

    printf("Check digit: %d", 9- total);
    

}