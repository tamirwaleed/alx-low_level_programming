#include "main.h"
/**
 * *cap_string - capitalizes
 * @c: string
 *Return: c
 */
char *cap_string(char *c)
{
int i, j, x, change1 = 0;
char sep[] = " \t\n,;.!?\"(){}";
for (i = 0, j = 1; c[i + 1] != '\0'; i++, j++)
{
for (x = 0; sep[x] != '\0'; x++)
{
if (c[i] == sep[x])
change1 = 1;
}
for (x = 0; sep[x] != '\0'; x++)
{
if (c[j] != sep[x] && change1 == 1 && c[j] <= 122 && c[j] >= 97)
c[j] = c[j] - 32;
change1 = 0;
}
}
return (c);
}
