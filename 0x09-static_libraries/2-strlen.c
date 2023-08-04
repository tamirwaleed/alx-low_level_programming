#include "main.h"
/**
 * _strlen - returns the string length
 * @s: string to be measured
 * Return: length of string
 */
int _strlen(char *s)
{
int i, j = 0;
for (i = 0 ; s[i] != '\0'; i++)
j++;
return (j);
}
