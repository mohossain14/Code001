#include <stdio.h>

#define EIGHTAM 480
#define NINEAM 583
#define ELEVENAM 649
#define TWELVEPM 767
#define TWOPM 840
#define THREEPM 945
#define SEVENPM 1140
#define NINEPM 1305

int main(void){
    int usr_h, usr_m;
    int time;
 


    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &usr_h, &usr_m);
    time = (usr_h * 60) + usr_m;

    if (time <= ((NINEAM - EIGHTAM)/2 )){
        printf("Closest departure time is 8:00am., arriving at 10:16am.\n");
    }
    else if(((NINEAM - EIGHTAM)/2) < time && time <= (ELEVENAM - NINEAM)/2){
        printf("Closest departure time is 9:43am., arriving at 11:52am.\n");
    }
    else if(((ELEVENAM - NINEAM)/2) < time && time <= (TWELVEPM - ELEVENAM)/2){
        printf("Closest departure time is 11:19am., arriving at 1:31pm.\n");
    }
    else if(((TWELVEPM - ELEVENAM)/2) < time && time <= (TWOPM - TWELVEPM)/2){
        printf("Closest departure time is 12:47pm., arriving at 3:00pm.\n");
    }
    else if(((TWOPM - TWELVEPM)/2) < time && time <= (THREEPM - TWOPM)/2){
        printf("Closest departure time is 2:00pm., arriving at 4:08pm.\n");
    }
    else if(((THREEPM - TWOPM)/2) < time && time <= (SEVENPM - THREEPM)/2){
        printf("Closest departure time is 3:45pm., arriving at 5:55pm.\n");
    }
    else if(((SEVENPM - THREEPM)/2) < time && time <= (NINEPM - SEVENPM)/2){
        printf("Closest departure time is 3:45pm., arriving at 5:55pm.\n");
    }
    else if(((NINEPM - SEVENPM)/2) < time && time > NINEPM){
        printf("Closest departure time is 3:45pm., arriving at 5:55pm.\n");
    }
//page 122


   return 0;
}