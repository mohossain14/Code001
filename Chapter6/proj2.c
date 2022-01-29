//writes a program that finds the GCD of given numbers

#include <stdio.h>

int main(void){
    int x, y, max = 1, n = 1;

    printf("Enter two integers (space between nums): "); //this only works when the largesrt number is entered first
    scanf("%d %d", &x, &y);


    for(;;){
        if ((x % n) == 0){ //first check if there is no remainder that indicates it is a divisor
            if (n == x){ //we need to check that the first number isnt equal to the divisor to end the loop
                break;
            }
            else if (y % n == 0){ //checks the second number for divisor 
                max = n; //makes n the max divisor
                n++; //increments the dividor
            }
            else {
                n++; //increment regardless to continue loops
            }
        }
        else {
            n++; //same keeps incrementeing
        }
    }
    printf("Greatest common divisor: %d", max);
    return 0;
}
