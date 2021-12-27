//write a program that counts blanks, tabs and newlines

#include <stdio.h>

int main(){
    int blnk, nl, c; //initialize the variables used

    blnk =0; //define they're initial values
    nl = 0;

    while((c= getchar()) != EOF){ //loops through the stream of characters
        if(c == ' '){ //checks for blanks
            ++blnk; //increments the blank space count
        }
        if(c == '\n'){ //checks for newlines
            ++nl;
        }
        printf("Blanks: %d\t Newlines: %d\n ", blnk, nl); //prints the final observations
    }
}