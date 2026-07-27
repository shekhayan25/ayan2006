// Given three variables: likes, comments, and shares (all numbers), write code to check if a post is 'trending' on Instagram (at least 1000 likes OR more than 200 comments AND at least 50 shares). Print the result.

#include<stdio.h>

void main(){
    int likes,comments,shares;

    printf("Enter Likes: ");
    scanf("%d",&likes);

    printf("Enter Comments: ");
    scanf("%d",&comments);

    printf("Enter Shares: ");
    scanf("%d",&shares);

    if(likes >=1000 || (comments>=200 && shares>=50) )
    {
        printf("Post is Trending");
    }
    else
    {
        printf("Post is Not Trending");
    }
}