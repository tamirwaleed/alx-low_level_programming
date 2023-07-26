#include "main.h"
/**
 * *_strcat - copies string
 * @dest: string to be returned
 * @src: string to be copied
 *Return: copied
 */
char *_strcat(char *dest, char *src)
{
int i, j = 0, x;
char a;
for (i = 0; dest[i] != '\0'; i++)
j++;
for (x = 0; src[x] != '\0'; x++)
{
a = src[x];
dest[j] = a;
j++;
}
return (dest);
}
