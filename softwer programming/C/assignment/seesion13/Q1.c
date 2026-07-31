// 1. Create a file called playlist.txt and write the names of your top 3 favorite songs from Spotify into it using write mode (w).

#include<stdio.h>

void main(){
    FILE *fptr;
    fptr=fopen("playlist.txt","w");

    if(fptr!=NULL){
        fprintf(fptr,"Tum Hi Ho\n");
        fprintf(fptr,"tere bin\n");
        fprintf(fptr,"Apna Bana Le\n");

        fclose(fptr);
        printf("Songs written successfully into playlist.text");
    }
    else{
         printf("File could not be created.");
    }
    
    
}