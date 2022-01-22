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
        if ((583 - totalTime) > (480 - totalTime)){
            printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
        }
        else{
            printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.")
        }
    }
    else if (totalTime < 679){
        //printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
    }
    else if (totalTime < 767){
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
    }
    else if (totalTime < 840){
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
    }
    else if (totalTime < 945){
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
    }
    else if (totalTime < 1140){
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
    }
    else if (totalTime < 1305){
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");
    }
    return 0;
}