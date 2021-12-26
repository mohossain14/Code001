#include<stdio.h>

int main(){
    //print Fahreheit-Celsius Table
    int fahr;
    printf("Fahreheit\tCelsius\n");

    for (fahr = 0; fahr <=300; fahr = fahr +20){ //loop can contain conditions for the process, for loop conditionals, -initial value-test condition- incrementing var
        printf("%3d\t\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32)); //we can output value by just including the argument bypassing the need for a variable completely
    }
    return 0;
}