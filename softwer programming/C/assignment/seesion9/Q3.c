// 3. Build a function that takes a 1D array of 7 integers representing your daily Zomato order amounts and calculates the average spend for the week.<br><br><em><strong>Hint:</strong> Use a loop to sum the values, then divide by the array length.</em>

#include<stdio.h>

float calculatesAverage(int orders[]){
    int i, sum=0;
    for(i=0;i<=6;i++){
        sum = sum+orders[i];
    }
    return(float)sum/7;
}

void main(){
    int orders[7]={300,500,400,250,400,800,1000};
    float average;

    average=calculatesAverage(orders);
    printf("Average Weekly spend = %2.f",average);
}