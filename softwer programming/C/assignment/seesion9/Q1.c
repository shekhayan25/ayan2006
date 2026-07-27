// 1.Declare a 1D array called dailySteps with 7 elements to store your step count for each day of the week, assign sample values, and print each value using a loop.

#include<stdio.h>

void main(){
    int dailySteps[7] = {5000,7000,4000,6500,5500,9000,8800};
    int i;

    printf("Daily Steps For 7 Days:\n");

    for(i =0;i<7;i++){
        printf("Day %d = %d Steps\n", i + 1, dailySteps[i]);
    }
}