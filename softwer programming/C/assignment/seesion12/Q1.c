// 1.Declare a structure named Playlist to store details of a song: title (string), artist (string), and duration in seconds (integer). Initialize one Playlist variable with your favorite song's details and print each field.

#include <stdio.h>

struct Playlist
{
    char title[50];
    char artist[50];
    int duration;
};

void main()
{
    struct Playlist song = {"Tum Hi Ho", "Arijit Singh", 262};

    printf("Song Title : %s\n", song.title);
    printf("Artist     : %s\n", song.artist);
    printf("Duration   : %d seconds\n", song.duration);
}