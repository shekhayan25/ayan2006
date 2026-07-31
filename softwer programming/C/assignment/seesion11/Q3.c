// 3.Given an array of 5 order amounts (e.g., Zomato orders), use a pointer to iterate through the array and print each amount along with its memory address.<br><br><em><strong>Hint:</strong> Use pointer arithmetic to move to the next element.</em>

#include<stdio.h>



void main(){
    int orders[5]={300,500,700,200,180};
    int *ptr;
    int i;

    ptr = orders;

    printf("Zomato Order Details\n");

    for(i=0;i<5;i++){
        printf("Order %d = %d\n",i+1, *ptr);
        printf("Address = %p\n",ptr);
        ptr++;
    }

}