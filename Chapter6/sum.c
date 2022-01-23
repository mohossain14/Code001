//sums a series of numbers 

#include <stdio.h>

int main(void){
    int n;
    int sum = 0;

    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");
    
    scanf("%d", &n); //initialize the first scan
    while (n != 0){ //loops while not zero
        sum += n; //adds to the sum
        scanf("%d", &n); 
    }
    printf("The sum is: %d\n", sum);

    return 0;
}