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
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
