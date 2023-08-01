#include "main.h"
/**
 * *_strchr - locates
 * @s: array
 * @c: to be located
 * Return: dest
 */
char *_strchr(char *s, char c)
{
int i, test = 0;
for (i = 0; test == 0 && s[i] != '\0'; s++)
{
if (s[i] == c)
test = 1;
}
if (test == 1)
return (s - 1);
else
return (s);
}
