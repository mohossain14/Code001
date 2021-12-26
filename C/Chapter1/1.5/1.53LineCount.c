#include <stdio.h>

int main(){
    int c, nl;

    nl =0; //initialize new lines
    while((c= getchar()) != EOF){ //loops through general given char stream
        if (c == 'i'){ //if reads for newline in the stream
            ++nl; //if true incremens the newline count by one
        }
        printf("%d\n", nl); //prints the number of newlines after completing if loop
    }
    return 0;
}