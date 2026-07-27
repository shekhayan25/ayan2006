// 1. Declare a string variable called songTitle and assign it the value 'Tum Hi Ho'. Print the length of the string using strlen().

#include <stdio.h>
#include <string.h>

void main()
{
    char songTitle[] = "Tum Hi Ho";

    printf("Song Title = %s\n", songTitle);
    printf("Length = %d", strlen(songTitle));
}
