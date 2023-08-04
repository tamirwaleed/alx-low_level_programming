#include "main.h"
/**
 * *_strchr - locates
 * @s: array
 * @c: to be located
 * Return: dest
 */
char *_strchr(char *s, char c)
{
int test = 0;
for (; test == 0 && *s != '\0'; s++)
{
if (*s == c)
test = 1;
}
if (test == 1)
return (s - 1);
else
return ('\0');
}
