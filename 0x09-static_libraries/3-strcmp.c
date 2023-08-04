#include "main.h"
/**
 * _strcmp - compares
 * @s1: string 1
 * @s2: string 2
 *Return: difference
 */
int _strcmp(char *s1, char *s2)
{
int i, j;
for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
j++;
j = s1[i] - s2[i];
return (j);
}

