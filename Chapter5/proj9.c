//tells us which date is earlier

#include <stdio.h>

int main(void){
    int m1, m2, d1, d2, y1, y2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%2d", &m1, &d1, &y1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%2d", &m2, &d2, &y2);

    if (y1 > y2){ //on higher level first compare the years
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", m2,d2, y2, m1, d1, y1);
    }
    else if (y1 == y2){ 
        if(m1 > m2){ //if years are same first compare the months
            printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", m2,d2, y2, m1, d1, y1);
        }
        else if (m1 == m2){
            if (d1 > d2){ //then days if months are same
                printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", m2,d2, y2, m1, d1, y1);
            }
            else{
                printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", m1,d1, y1, m2, d2, y2);
            }
        }
        else if (m1 < m2){
            printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", m1,d1, y1, m2, d2, y2); //to print out 2 digits .2 is important to get the zero to show up on single digit years
        }
    }
    else if (y1 < y2){
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", m1,d1, y1, m2, d2, y2);
    }
    return 0;
}