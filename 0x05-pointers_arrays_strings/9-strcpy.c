#include "main.h"
/**
 * *_strcpy - copies
 * @dest: pointer
 * @src: string to be copied 
* Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
char d[1000];
int i, j = 0;
for (i = 0; src[i] != '\0'; i++)
j++;
for (i = 0; i <= j; i++)
d[i] = src[i];
*dest = d[0];
return dest;
}
