// 3. Add two more song names to playlist.txt without deleting the existing ones by opening the file in append mode (a).

#include<stdio.h>

void main(){
    FILE *fptr;

    fptr = fopen("playlist.txt","a");

    if (fptr !=NULL){
        fprintf(fptr,"Tu Jaane Na\n");
        fprintf(fptr,"Pal_Pal_Dil_Ke_Paas\n");

        fclose(fptr);
        printf("Song Added Successfully Into playlist.txt");
    }
    else
    {
        printf("File Could Not Be Opened.");
    }
}