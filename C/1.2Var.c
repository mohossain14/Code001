#include <stdio.h>

//print the Fahrenheit-Celcius table from 0 to 300

int main(){
    int fahr, celsius;
    int lower, upper, steps;

    lower = 0; //lower limit of temp table
    upper = 300; //upper limit
    steps = 20; //step size 

    fahr = lower; //initialize the want variable
    printf("Celsius\t\tFahrenheit\n");
    while (fahr <= upper){ //loops through until it is equal to upper limit
        celsius = 5 * (fahr-32) / 9; //the equation we want
        printf("%d\t\t%d\n", fahr, celsius);
        fahr = fahr + steps;
    }
    return 0;
}