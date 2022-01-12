//Converts a Fahrenheit temp to Celsius temperature

#include <stdio.h>
#define FREEZING_PT 32.0f //when using floats good to have f at the end to indicate float
#define SCALE_FACTOR (5.0f / 9.0f) //we write it as 5.0/9.0 since integers get truncated to zero, putting it in float gives us an accurate approximation. 

int main(void){
    float fahrenheit, celsius;

    printf("Enter the Fahrenheit temperature: ");
    scanf("%f", &fahrenheit); //read in float even if its just int since most of our eqn is in float anyway

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR; //using the macro def cleans up our code signifcantly

    printf("Celsius equivalent: %.1f\n", celsius); //.1 indicates to only print one decimal point 
    return 0;
}