#include "main.h"
/**
 * reverse_array - reverses
 * @a: array
 * @n: elements
 *Return: void
 */
void reverse_array(int *a, int n)
{
int i, x;
n--;
for (i = 0; i <= n; i++)
{
x = a[i];
a[i] = a[n];
a[n] = x;
n--;
}
return;
}
