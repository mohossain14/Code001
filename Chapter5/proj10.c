//switch statement to compare grades

#include <stdio.h>

int main(void){
    int num1, num2;

    printf("Enter numerical grade: ");
    scanf("%1d%1d", &num1, &num2);

    switch (num1){
        case 0: case 1: case 2: case 3: case 4: case 5: printf("Letter Grade: F\n"); break; //when you have multiple corresponding cases just use (:) to indicate they are part of the same statement!!
        case 6: printf("Letter Grade: D\n"); break;
        case 7: printf("Letter Grade: C\n"); break;
        case 8: printf("Letter Grade: B\n"); break;
        case 9: printf("Letter Grade: A\n"); break;
    }
}