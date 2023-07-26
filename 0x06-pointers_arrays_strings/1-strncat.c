#include "main.h"
/**
 * *_strncat - copies string
 * @dest: string to be returned
 * @src: string to be copied
 * @n: bytes
 *Return: copied
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j = 0, x;
for (i = 0; dest[i] != '\0'; i++)
j++;
for (x = 0; x < n && src[x] != '\0'; x++)
{
dest[j] = src[x];
j++;
}
return (dest);
}
