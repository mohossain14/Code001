//reduces fraction

#include <stdio.h>

int main(void){
    int num1, den1;
    int max = 1, n;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num1, &den1);

    for(;;){
        if (num1 % n == 0){
            if (n == den1){
                break;
            }
            else if (den1 % n == 0){
                n = max;
                n++;
            }
            else {
                n++;
            }
        }
        else {
            n++;
        }
    }
    printf("In lowest terms: %d/%d", num1 / max, den1 / max);
    return 0;

}