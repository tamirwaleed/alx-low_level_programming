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
unsigned int i, size = 0;
if (str == NULL)
return (NULL);
while (str[size] != '\0')
size++;
s = malloc(sizeof(char) * (size + 1));
if (s == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
s[i] = str[i];
return (s);
}
