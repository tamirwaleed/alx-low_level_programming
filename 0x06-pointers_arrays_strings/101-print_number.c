#include "main.h"
/**
 * print_number - prints number
 * @n: integer
 * Return: void
 */
void print_number(int n)
{
if (n < 0)
{
n = n * -1;
_putchar('-');
}
if (n >= 1000)
{
_putchar((n / 1000) + '0');
_putchar(((n / 100) % 10) + '0');
_putchar(((n / 10) % 10) + '0');
_putchar((n % 10) + '0');
}
else if (n >= 100)
{
_putchar((n / 100) + '0');
_putchar(((n / 10) % 10) + '0');
_putchar((n % 10) + '0');
}
else if (n >= 10)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
else
_putchar(n + '0');
return;
}
