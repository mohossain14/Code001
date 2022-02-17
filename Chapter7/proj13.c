//prints average word length 

#include <stdio.h>

int main(void){
    char ch;
    int letter = 0, word = 1;
    double avg;

    printf("Enter a sentence: ");
    ch = getchar();

    while(ch != '\n'){
        if (ch == ' '){
            word++;
            ch = getchar();
        } 
        else{
            letter++;
            ch = getchar();
        } 
    }
    avg = (double) letter / word;

    printf("Average world length is: %.2f\n", avg);

    return 0;
}