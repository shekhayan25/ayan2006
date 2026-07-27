// 5.Modify your pyramid pattern code to accept the number of rows as user input, so the user can set the height of the pyramid before printing.

#include<stdio.h>

void main(){
    int i,j,s,rows;

    printf("Enter Number OF ROWS: ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++){
        for(s=1;s<=rows-i;s++)
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