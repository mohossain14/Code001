//writes a program that finds the GCD of given numbers

#include <stdio.h>

int main(void){
    int x, y, max = 1, div = 1;

    printf("Enter two integers (space between nums): ");
    scanf("%d %d", &x, &y);

    for(;;){
        if ((x % div) == 0) {
            if ((y % div) == 0){
                max = div;
                div++;
            }
            else {
                div++;
                continue;
            }
        }
        else {
            div++;
        }
    }
    printf("Greatest common divisor: %d", div);
    return 0;
}