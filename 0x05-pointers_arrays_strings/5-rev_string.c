#include "main.h"
/**
 * rev_string - reverses
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
int i, j = 0, z = 0;
char a;
for (i = 0; s[i] != '\0'; i++)
j++;
for (i = (j - 1); i >= j / 2; i--)
{
a = s[i];
s[i] = s[z];
s[z] = a;
z++;
}
return;
}
