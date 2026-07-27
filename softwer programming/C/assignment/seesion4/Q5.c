// 5. Write a code snippet that demonstrates the difference between pre-increment (++count) and post-increment (count++) by logging the values before and after using both on a followerCount variable.

#include<stdio.h>

void main(){
    int followerCount = 100;
    printf("initial Follower Count = %d\n",&followerCount);

    printf("\nPre-increment:\n");
    printf("Value = %d\n",++followerCount);
    printf("After Pre-increment = %d\n",followerCount);

    followerCount = 100;

    printf("\nPost-increment:\n");
    printf("value = %d\n",followerCount++);
    printf("After Post-increment =%d\n",followerCount);
}