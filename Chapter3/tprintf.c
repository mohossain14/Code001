//print int and float values in various formats 

#include <stdio.h>

int main(void){
    int i;
    float x;

    i = 40;
    x = 839.21f; //always give float the f in the value for compiler

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i); //default values are right justified so putting the (-) left justifies it. 5.3d displays an extra zero since it is an integer that need an extra digit
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x); //%e gives us the value in exp form. %g will give either in decimal or exp depending on the size of the float

    printf("\"Hello\""); //you use \" to indicate a quotation within the string literal

    printf("\n Hey \\ There!"); // [\\] means a single \ since one \ can mean an escape sequence 


    return 0;
}