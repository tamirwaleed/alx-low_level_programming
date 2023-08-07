#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates
 * @s1: 1st string
 * @s2: 2nd string
 * Return: pointer or NULL
 */
char *str_concat(char *s1, char *s2)
{
char *s;
int i, size1 = 0, size2 = 0, size;
while (s1[size1] != 0)
size1++;
while (s2[size2] != 0)
size2++;
size = size1 + size2;
s = malloc(sizeof(char) * (size + 1));
if (s == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
if (size1 != 0 && size2 != 0)
{
if (i < size1)
s[i] = s1[i];
else
s[i] = s2[i - size1];
}
else if (size1 == 0 && size2 != 0)
s[i] = s2[i];
else if (size1 != 0 && size2 == 0)
s[i] = s1[i];
else if (size1 == 0 && size2 == 0)
s[i] = '\0';
}
return (s);
}
