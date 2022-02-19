#include <stdio.h>
#include <stdbool.h>

int main(void){
    bool digit_seen[10] = {false};
    int digit, count[10]= {0};
    long n;
    int i, j; 

    printf("Enter a number: ");
    scanf("%ld",&n);

    while (n > 0){
        digit = n % 10;
        digit_seen[digit] = true;
        n /=10;
        count[digit]++;
    }
    printf("Digit:    \t");
    for(i = 0; i < 10; i++){
        printf("%d ", i);
    }
    printf("\nOccurences: \t");
    for (j = 0; j < 10; j++){
        printf("%d ", count[j]);
    }
    printf("\n");

    return 0;
}