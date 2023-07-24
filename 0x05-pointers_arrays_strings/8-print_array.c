#include "main.h"
#include <stdio.h>
/**
 * prints_array - prints
 * @a: array
 * @n: no. of elements 
* Return: void
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i <= (n - 1); i++)
{
if (i == (n - 1))
printf("%d\n", a[i]);
else
printf("%d, ", a[i]);
}
return;
}
