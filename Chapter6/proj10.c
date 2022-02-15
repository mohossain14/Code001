
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
                m3 = m2;
                d3 = d2;
                y3 = y2;
            }
            else if (m1 == m2){
                if (d1 > d2){
                   m3 = m2;
                   d3 = d2;
                   y3 = d2;

                }
                else{
                    m3 = m1;
                    d3 = d1;
                    y3 = y1;
                }
            }
            else if (m1 < m2){
                m3 = m1;
                d3 = d1;
                y3 = y1;
            }
        }
        else if (y1 < y2){
            m3 = m1;
            d3 = d1;
            y3 = y1;
        }
    }

    printf("The earliest date is: %d/%d/%.2d\n", m3, d3, y3);

    return 0;


}