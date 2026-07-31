// 2. Open playlist.txt in read mode (r) and display each song name on a separate line in the console.

#include<stdio.h>

void main(){
    FILE *fptr;
    char song[100];

    fptr = fopen("playlist.txt","r");

    if(fptr != NULL){
        printf("Songs in Playlist:\n");
        while(fgets(song,sizeof(song),fptr)!=NULL)
        {
            printf("%s",song);
        }
        fclose(fptr);
    }
    else
    {
        printf("File Could Not Be Opened.");
    }
}