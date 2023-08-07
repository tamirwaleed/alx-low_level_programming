#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer
 * @str: string
 * Return: pointer or NULL
 */
char *_strdup(char *str)
{
char *s;
int i, size = 0;
if (*str == '\0')
return ('\0');
while (str[size] != '\0')
size++;
s = malloc(sizeof(char) * (1 + size));
if (*s == '\0')
return ('\0');
for (i = 0; str[i] != '\0'; i++)
s[i] = str[i];
return (s);
}
