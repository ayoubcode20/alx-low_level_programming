#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Description: copies the string pointed to by pointer src to
 * the buffer pointed to by dest
 * Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
        int i = 0; // Initialize i to 0

        while (src[i] != '\0') { // Use a while loop to copy the string
                dest[i] = src[i];
                i++;
        }

        dest[i] = '\0'; // Add the null-terminator to the destination string

        return dest;
}
