#include "main.h"
/**
 * *cap_string - capitalizes
 * @c: string
 *Return: c
 */
char *cap_string(char *c)
{
int i, j;
for (i = 0, j = 1; c[i + 1] != '0'; i++, j++)
{
if (c[i] == ' ' || c[i] == '.' || c[i] == '\n' || c[i] == '\t' || c[i] == ',' || c[i] == ';' || c[i] == '!' || c[i] == '?' || c[i] == '"' || c[i] == '(' || c[i] == ')' || c[i] == '{' || c[i] == '}')
{
if (c[j] != ' ' || c[j] != '.' || c[j] != '\n' || c[j] != '\t' || c[j] != ',' || c[j] != ';' || c[j] != '!' || c[j] != '?' || c[j] != '"' || c[j] != '(' || c[j] != ')' || c[j] != '{' || c[j] != '}')
c[j] = c[j] - 32;
}
}
return (c);
}
