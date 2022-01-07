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
        celsius = (5.0/9.0)* (fahr-32.0); //the equation we want in float mode to get more accurate, 5 and 9 need decimals to be used as floats
        printf("%3.0f\t\t%6.1f\n", fahr, celsius); // the 3.0 indicates zero decimals while 6.1 indicates 1 digit past decimal
        fahr = fahr + steps; 
    }
    return 0;
}