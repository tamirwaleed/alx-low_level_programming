#include "main.h"
/**
 * *rot13 - rotates by 13
 * @c: string to be leeted
 * Return: c
 */
char *rot13(char *c)
{
int i, j;
char R[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; c[i] != '\0'; i++)
{
for (j = 0; R[j] != '\0'; j++)
{
if (c[i] == R[j])
{
c[i] = r[j];
break;
}
}
}
return (c);
}
