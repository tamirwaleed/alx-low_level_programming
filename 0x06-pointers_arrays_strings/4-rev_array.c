#include "main.h"
/**
 * reverse_array - reverses
 * @s1: array
 * @n: elements
 *Return: void
 */
void reverse_array(int *a, int n)
{
int i, x;
n--;
for (i = 0; i <= n / 2; i++)
{
x = a[i];
a[i] = a[n];
a[n] = x;
n--;
}
return;
}
