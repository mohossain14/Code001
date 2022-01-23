//square program that squares values

#include <stdio.h>

int main(void){
    int num1;
    int i = 1;

    printf("Enter number of entries in table: ");
    scanf("%d", &num1);

    while(i <= num1){
        printf("%10d\t%10d\n", i, i * i); //to right justify the statement make the conversion specifier bigger than the values
        i++;
    }
    return 0;
}