// 1. Create a console-based app called Music Listening Logger that allows users to enter the number of minutes they listened to music each day for a week and stores this data in an array.

#include<stdio.h>

void main(){
    int minutes[7];
    int i;

    for(i=0;i<7;i++){
        printf("Enter music listening minutes for Day %d: ",i+1);
        scanf("%d",&minutes[i]);
    }
     printf("\nWeekly Music Listening Report\n");
    for(i = 0; i < 7; i++)
    {
        printf("Day %d = %d minutes\n", i + 1, minutes[i]);
    }
}