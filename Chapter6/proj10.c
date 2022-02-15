<<<<<<< HEAD

#include <stdio.h>

int main(void){
    int d1, d2, d3, m1, m2, m3, y1, y2, y3;

    for(;;){
        printf("Enter the date in the format (mm/dd/yy): ");
        scanf("%2d/%2d/%2d", &m1, &d1, &y1);
        printf("Enter the date in the format (mm/dd/yy): ");
        scanf("%2d/%2d/%2d", &m2, &d2, &y2);
        if(d1 == 0){
            break;
        }
        else if(y1 == y2){
            if(m1 > m2){
=======
#include <stdio.h>

int main(void){
    int m1, d1, y1, m2, d2, y2, m3, d3, y3;
    int m4 = 99, d4 = 99, y4 = 99;

    for(;;){
        printf("Enter the date (mm/dd/yy): ");
        scanf("%2d/%2d/%2d", &m1, &d1, &y1);

        if(m1 == 0){ //breaks when first month is zero
            break;
        }
        printf("Enter the date (mm/dd/yy): ");
        scanf("%2d/%2d/%2d", &m2, &d2, &y2);

        if(d2 == 0){ //breaks if any of the days are zero
            break;
        }
        else if (y1 == y2){ //checks for if years are equivalent
            if(m1 > m2){ //chooses the lowsest month
>>>>>>> a95410693b99fab78a198e5c338ea0d9237960ea
                m3 = m2;
                d3 = d2;
                y3 = y2;
            }
<<<<<<< HEAD
            else if (m1 == m2){
                if (d1 > d2){
                   m3 = m2;
                   d3 = d2;
                   y3 = d2;

=======
            else if(m1 == m2){ //picks the earliest date with multiple scenarios and possibilities
                if(d1 > d2){
                    m3 = m2;
                    d3 = d2;
                    y3 = y2;
>>>>>>> a95410693b99fab78a198e5c338ea0d9237960ea
                }
                else{
                    m3 = m1;
                    d3 = d1;
                    y3 = y1;
                }
            }
<<<<<<< HEAD
            else if (m1 < m2){
=======
            else{
>>>>>>> a95410693b99fab78a198e5c338ea0d9237960ea
                m3 = m1;
                d3 = d1;
                y3 = y1;
            }
        }
<<<<<<< HEAD
        else if (y1 < y2){
            m3 = m1;
            d3 = d1;
            y3 = y1;
        }
    }

    printf("The earliest date is: %d/%d/%.2d\n", m3, d3, y3);

    return 0;


=======
        else if(y1 > y2){
            m3 = m2;
            d3 = d2;
            y3 = y2;
        }
        else if(y1 < y2){
            m3 = m1;
            d3 = d1;
            y3 = y1;
        } //END LOOPS
        if(d3 !=0){ //checks the date just chosen against the one in memory
            if(y3 < y4){
            m4 = m3;
            d4 = d3;
            y4 = y3;
            }
            else if(y3 == y4){
            if(m4 > m3){
                m4 = m3;
                d4 = d3;
                y4 = y3;
            }
            else if(m3 == m4){
                if(d3 > d4){
                    m4 = m4;
                    d4 = d4;
                    y4 = y4;
                }
                else{
                    m4 = m3;
                    d4 = d3;
                    y4 = y3;
                }
            }
            else{
                m4 = m4;
                d4 = d4;
                y4 = y4;
            }
        }
        }
    }
    printf("The earliest date is %.2d/%.2d/%.2d", m4, d4, y4); //gives us the earliest date
    return 0;
>>>>>>> a95410693b99fab78a198e5c338ea0d9237960ea
}