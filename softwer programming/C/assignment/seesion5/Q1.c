// 1. Create a simple IPL Fan Bot that takes your favorite IPL team name as input and uses if-else-if statements to print a unique cheer message for each team (e.g., 'Go Mumbai Indians!', 'Chennai Super Kings for the win!'). If the team is not recognized, print 'Team not found!'

#include<stdio.h>
#include<string.h>


void main(){
    char team[50];

    printf("Enter Your Favorite Ipl Team: ");
    scanf(" %[^\n]", team);
    
    if(!strcmp(team,"Mumbai Indians"))
    {
        printf("Go Mumbai Indians!");
    }
    else if(!strcmp(team,"Chennai Super Kings"))
    {
        printf("Chennai Super Kings for the win!");
    }
    else if(!strcmp(team,"Royal Challengers Bangalore"))
    {
        printf("Ee Sala Cup Namde!");
    }
    else if (!strcmp(team,"Kolkata Knight Riders"))
    {
        printf("Korbo Lorbo Jeetbo!");
    }
    else if (!strcmp(team,"Gujarat Titans"))
    {
        printf("Aava De! Gujarat Titans!");
    }
    else if(!strcmp(team,"Lucknow Super Giants"))
    {
        printf("Ab Apni Baari Hai! Go LSG!");
    }
    else if (!strcmp(team, "Punjab Kings"))
    {
        printf("Sadda Punjab, Sadda Kings!");
    }
    else if (!strcmp(team, "Delhi Capitals"))
    {
        printf("Roar Macha! Delhi Capitals!");
    }
    else if (!strcmp(team, "Rajasthan Royals"))
    {
        printf("Halla Bol! Go Rajasthan Royals!");
    }
    else if (!strcmp(team, "Sunrisers Hyderabad"))
    {
        printf("Orange Army Rising! Go SRH!");
    }
    else
    {
        printf("Team not found!");
    }





}