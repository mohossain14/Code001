//find the largest number in a series

#include <stdio.h>

int main(void){
    float i, max; //first initialize the floats

    printf("Enter a number: "); 
    scanf("%f", &i); 
    max = i; //need to initialize max with the first value to start somewhere

    for(;;){ //infinite loop since we dont know how many values are to be inserted
        printf("Enter a number: ");
        scanf("%f", &i);
        if (i > max){ //need to decide if the given value is greater than max
            max = i; // if it is then max become the value i
        }
        else if (i == 0.0f){ 
            break; //when zero entered the loop is broken
        }

    }
    printf("The largest number entered was %.2f", max); //give us the max found by the program
    return 0;
}