//gives the closest flight time to given time range

#include <stdio.h>

int main(void){
    int hr, min, totalTime;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hr, &min);

    totalTime = (hr * 60) + min;

    if  (totalTime < 480){
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
    }
    else if (totalTime < 583){
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
    }
    else if (totalTime < 679){
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
    }
    else if (totalTime < 767){
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
    }
}