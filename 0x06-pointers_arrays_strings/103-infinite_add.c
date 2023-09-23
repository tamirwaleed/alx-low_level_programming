#include "main.h"
/**
 * *infinite_add - adds
 * @n1: number1
 * @n2: number2
 * @r: result
 * @size_r: size
 * Return: r or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, a, b, c;
char res[100];
for (i = 1; n1[i] != '\0'; i++)
;
for (j = 1; n2[j] != '\0'; j++)
;
for (; i >= 0 && j >= 0; i--, j--)
{
a = (n1[i] - '0');
b = (n2[j] - '0');
c = a + b;
if (c >= 10)
{

}
r = r + c;
}
if (r != 0)
return (r);
else
return (0);
}
