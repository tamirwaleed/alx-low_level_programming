#include "main.h"
/**
 * *_strcpy - copies
 * @dest: pointer
 * @src: string to be copied
 *Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i, j = 0;
for (i = 0; src[i] != '\0'; i++)
j++;
for (i = 0; i <= j; i++)
dest[i] = src[i];
return (dest);
}
