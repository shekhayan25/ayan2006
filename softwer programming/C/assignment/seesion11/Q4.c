// 4. Create a function incrementFollowers(int *followers, int n) that increases each follower count in an array (representing Instagram followers for 5 friends) by 100 using pointer arithmetic, then print the updated counts.

#include<stdio.h>

void incrementFollowers(int *followers, int n){
    int i;
    for(i=0;i<n;i++){
        *followers =*followers+100;
        followers++;
    }
}

void main(){
    int friends[5]={1200,2000,2200,1000,900};
    int i;

    incrementFollowers(friends,5);
    printf("Updated Folowers: \n");
    for(i=0;i<5;i++){
        printf("Friend %d =%d \n",i+1,friends[i]);
    }

}