#include "main.h"
/**
 * print_diagonal - prints diagonal
 *@n: number of '\'
 * Return: void
 */
void print_diagonal(int n)
{
int i, j;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
for (j = 1; j < i;  j++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
else
_putchar('\n');
return;
}
