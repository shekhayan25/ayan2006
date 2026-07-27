// 3. Write two functions: increaseFollowersByValue and increaseFollowersByReference. Each should take a followers count and add 1000 to it, but one should use pass-by-value and the other pass-by-reference. Show how the original followers count changes (or doesn't) after calling each function.

#include<stdio.h>

void increaseFollowersByValue(int followers){
    followers = followers + 1000;
    printf("Followers Inside Value Funtion = %d\n",followers);
}

void increaseFollowersByReference(int *followers){
    *followers = *followers + 1000;
    printf("Followers Inside Reference Function =%d\n",*followers);
}

    void main()
{
    int followers = 5000;

    printf("Original Followers = %d\n\n", followers);

    // Pass by Value
    increaseFollowersByValue(followers);
    printf("After Value Function = %d\n\n", followers);

    // Pass by Reference
    increaseFollowersByReference(&followers);
    printf("After Reference Function = %d\n", followers);
}