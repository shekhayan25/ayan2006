// 1. Create a simple JavaScript function called calculateTotal that takes two numbers: itemPrice and quantity, and returns the total bill amount using arithmetic operators.


#include <stdio.h>

 int calculateTotal(int itemPrice, int quantity)
 {
     return itemPrice * quantity;
 }

 void main()
 {
     int total = calculateTotal(250, 3);

     printf("Total = %d", total);

    

 }

