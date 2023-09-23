#include "main.h"
/**
 * _strspn - counts
 * @s: to be counted in
 * @accept: checked
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0, j, k;
for (j = 0; accept[j] != '\0'; j++)
{
for (k = 0; s[k] != '\0' && s[k] != 32; k++)
{
if (accept[j] == s[k])
i++;
}
}
return (i);
}
