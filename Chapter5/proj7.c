//find the largest and smallest numbers given four integers

#include <stdio.h>

int main(void){
    int num1, num2, num3, num4;
    int max1, max2, min1, min2;
    int MAX, MIN;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if (num1 > num2){
        max1 = num1;
        min1 = num2;
    }
    else{
        max1 = num2;
        min1 = num1;
    }
    if (num3 > num4){
        max2 = num3;
        min2 = num4;
    }
    else {
        max2 = num4;
        min2 = num3;
    }

    if (max1 > max2){
        MAX = max1;
    }
    else{
        MAX = max2;
    }
    if (min1 < min2){
        MIN = min1;
    }
    else{
        MIN = min2;
    }

    printf("Largest: %d\n Smallest: %d\n", MAX, MIN);
}