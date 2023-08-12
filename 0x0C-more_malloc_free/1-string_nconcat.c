#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates
 * @s1: string1
 * @s2: string2
 * @n: bytes
 * Return: pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, l1, l2;
char *s;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (l1 = 0; s1[l1] != '\0'; l1++)
;
for (l2 = 0; s2[l2] != '\0'; l2++)
;
if (n >= l2)
n = l2;
s = malloc(sizeof(char) * (n + l1 + 1));
if (s == NULL)
return (NULL);
for (i = 0; i < n; i++)
s[i + l1] = s2[i];
return (s);
}
