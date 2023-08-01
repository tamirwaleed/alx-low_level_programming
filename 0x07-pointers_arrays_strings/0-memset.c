#include "main.h"
/**
 * *_memset - sets n bytes to constant
 * @s: array
 * @b: constant
 * @n: bytes
 * Return: a
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i <= n; i++)
s[i] = b;
return (s);
}
