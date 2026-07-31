// 1.Declare an integer variable called likes and a pointer variable called ptrLikes; assign likes a value, point ptrLikes to likes, and print both the value and the address stored in ptrLikes.

#include <stdio.h>

void main()
{
    int likes = 500;
    int *ptrLikes;

    ptrLikes = &likes;

    printf("Value of likes = %d\n", likes);
    printf("Value using pointer = %d\n", *ptrLikes);
    printf("Address stored in ptrLikes = %p\n", ptrLikes);
}