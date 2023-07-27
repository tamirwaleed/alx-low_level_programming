#include "main.h"
/**
 * *leet - Leets
 * @c: string to be leeted
 * Return: c
 */
char *leet(char *c)
{
int i, j;
char temp;
char l[] = "aeotl";
char L[] = "AEOTL";
char lx[] = "43071";
for (i = 0; c[i] != '\0'; i++)
{
for (j = 0; l[j] != '\0'; j++)
{
if (c[i] == l[j] || c[i] == L[j])
{
temp = lx[j];
c[i] = temp;
}
}
}
return (c);
}
