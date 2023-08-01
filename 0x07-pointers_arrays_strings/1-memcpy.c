#include "main.h"
/**
 * *_memcpy - copies n bytes from src to dest
 * @dest: destination array
 * @src: source array
 * @n: bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
char temp;
for (i = 0; i < n; i++)
{
temp = src[i];
dest[i] = temp;
}
return (dest);
}
