#include <stdio.h>

//print the Fahrenheit-Celcius table from 0 to 300

int main(){
    float fahr, celsius;
    int lower, upper, steps;

    lower = 0; //lower limit of temp table
    upper = 300; //upper limit
    steps = 20; //step size 
    fahr = lower; //initialize the want variable
    
    printf("Celsius\t\tFahrenheit\n");
    while (fahr <= upper){ //loops through until it is equal to upper limit
        celsius = (5.0/9.0)* (fahr-32); //the equation we want in float mode to get more accurate
        printf("%3d\t\t%5d\n", fahr, celsius); //the %3d right justifies to 3 digits likwise %6d is 6 digits by giving it width parameters
        fahr = fahr + steps;
    }
    return 0;
}