#include <stdio.h>
//this is actually project 6, need to do 5 but dont understand what is being asked

int main(void){
    int x,y;

    printf("Enter a number: ");
    scanf("%d", &x);

    for (y = 2; y <= x; y++){ //initializes loop to the value given
        if (y % 2 == 0){ //we need to first check to make sure the number is even
            if (y*y > x){ //but we also need to check to see if the square is bigger than our original value
                break; //if it is we break the loop
            }
            else{
                printf("%d\n", y * y); //otherwise we can just printf the squared value
            }
        }
    }
    return 0;
}