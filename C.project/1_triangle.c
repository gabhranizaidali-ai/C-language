#include<stdio.h>

int main(){


    float FristAngale,ScecondAngle,ThardAngal;

    printf(" \nEnter FristAngle =");
    scanf("%f",& FristAngale);


    printf(" \nEnter ScecondAngle =");
    scanf("%f",& ScecondAngle);

    ThardAngal= 180-(FristAngale-ScecondAngle);
    printf("the ThardAngle value is = %2f",ThardAngal);

    return 0;


}