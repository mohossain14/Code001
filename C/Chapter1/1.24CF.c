#include <stdio.h>

int main(){
    float fahr, cels; //initialize the variables being used
    float upper, lower, step;

    lower = 0; //set the initial values needed 
    upper =300.0;
    step = 20.0;
    printf("Celsius\t\tFahrenheit\n");
    cels = lower;

    while (cels <= upper){
        fahr = (1.8*cels) + 32;
        printf("%4.0f\t\t%5.1f\n", cels, fahr);
        cels = cels + step;
    }
    return 0;
}