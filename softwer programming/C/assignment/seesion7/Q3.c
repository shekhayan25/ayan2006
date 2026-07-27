// 3.Create a pattern that prints a pyramid of stars (*) with 6 rows, centered like the loading animation you see on BookMyShow when a page is loading.<br><br><em><strong>Hint:</strong> Use spaces to align the stars in the center for each row.</em>

#include<stdio.h>

void main(){
    int i,j,s;

    for(i=1;i<=6;i++){
        for(s=1;s<=6-i;s++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}