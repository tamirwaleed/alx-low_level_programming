#include "main.h"
/**
 * *_strncpy - copies string
 * @dest: string to be returned
 * @src: string to be copied
 * @n: bytes
 *Return: copied
 */
char *_strncpy(char *dest, char *src, int n)
{
int i, j = 0;
for (i = 0; i < n; i++, j++)
{
if (src[j] != '\0')
dest[i] = src[j];
else
dest[i] = '\0';
}
return (dest);
}
