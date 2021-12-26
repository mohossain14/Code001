#include <stdio.h>

int main(){
    int c; //initializes an int since we are dealing with a stream 

    //c = getchar(); //reads the characters
    //while(c != EOF){ //for loop tests until it reaches the end of the file
        //putchar(c); //output the char read
       // c= getchar(); //reads the next character in the stream

    while ((c= getchar()) != EOF){
        putchar(c);
    }
    return 0;
}