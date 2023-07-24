#include "main.h"
#include <stdio.h>
/**
 * print_array - prints
 * @a: array
 * @n: no. of elements
 *Return: void
 */
void print_array(int *a, int n)
{
int i;
if (n > 0)
{
for (i = 0; i <= (n - 1); i++)
{
if (i == (n - 1))
printf("%d\n", a[i]);
else
printf("%d, ", a[i]);
}
}
else
printf("\n");
return;
}
