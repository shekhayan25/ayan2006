// 4.Given a 2D array called cricketScores where each row represents an IPL match and columns represent runs scored by each team, write code to print the highest score from each match.

#include<stdio.h>



void main(){
    int cricketScores[3][2]={{199,200},{180,175},{210,190},{113,49}};
    int i,highest;

    for(i=0;i<=3;i++){
        if(cricketScores[i][0]>cricketScores[i][1])
        {
            highest = cricketScores[i][0];
        }
        else
        {
            highest=cricketScores[i][1];
        }
        printf("Match %d Highest Score =%d\n",i + 1,highest);
    }
}