//write a program to copy its input to its output while replacing its certain letters with blanks

#include <stdio.h>

int main(){
    int c; //initialize a variable

    while((c= getchar()) != EOF){ //pulls the string of characters
        if (c == ' '){  //tests for spaces in stream
            putchar('g');  //replaces space with g
        }
        else{ 
            putchar(c); //just spits out the originial letter
        }
    }
    return 0;
}
