#include "main.h"
/**
 * print_number - prints number
 * @n: integer
 * Return: void
 */
void print_number(int n)
{
int i;
int r, j = 1, power = 1;
if (n < 0)
{
n = n * -1;
_putchar('-');
}
for (i = n; i >= 10; j++)
{
i = i / 10;
power = power * 10;
}
for (i = n; j > 0; j--)
{
r = i % power;
_putchar((i / power) + '0');
i = r;
power = power / 10;
}
return;
}
