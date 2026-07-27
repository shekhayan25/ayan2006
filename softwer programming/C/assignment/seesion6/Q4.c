// 4. Explain with your own example the difference between entry-controlled and exit-controlled loops by writing a short code snippet for each (for/while vs do-while) and describing what happens if the loop condition is false at the start.


#include <stdio.h>

void main(){

// 1. Entry-Controlled Loop:
// Condition is checked before the loop body, so if it is false initially, the loop does not execute.

            int i = 5;
            while (i < 5)
                {
                    printf("%d\n", i);
                    i++;
                }

                printf("Loop End");



// 2. Exit-Controlled Loop:
// Condition is checked after the loop body, so the loop executes at least one time even if the condition is false initially.

                
                do
                {
                    printf("%d\n", i);
                    i++;
                } while (i < 5);

                printf("Loop End");
}




   

