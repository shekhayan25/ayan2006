// 2.Write a function swapPlaylistCounts(int *a, int *b) that swaps the number of songs in two Spotify playlists using pointers,then call the function in main and print the swapped values.

#include <stdio.h>


void swapPlaylistCounts(int *a,int *b){
    int swap;

    swap = *a;
    *a = *b;
    *b = swap;
}

void main(){
    int Playlist1 = 120;
    int Playlist2 = 90;

    printf("Before Swapping:\n");
    printf("Playlist 1 Songs= %d\n",Playlist1);
    printf("Playlist 2 Songs= %d\n",Playlist2);

    swapPlaylistCounts(&Playlist1,&Playlist2);

    printf("\nAfter Swapping:\n");
    printf("Playlist 1 Songs= %d\n",Playlist1);
    printf("Playlist 2 Songs= %d\n",Playlist2);


}