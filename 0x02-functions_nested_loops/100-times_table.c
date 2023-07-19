#include "main.h"
/**
* print_times_table - prints the n times table
* @n: times table
*/
void print_times_table(int n)
{
int i, a, b;
if ((n >= 0) && (n <= 15))
{
for (a = 0; a <= n; a++)
{
for (b = 0; b <= n; b++)
{
i = a * b;
if (b != n)
{
if (i >= 100)
{
_putchar((i / 100) + '0');
_putchar(((i / 10) % 10) + '0');
_putchar((i % 10) + '0');
} 
else if (i >= 10 && i < 100)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
else
_putchar(i + '0');
_putchar(',');
_putchar(' ');
}
else
{
if (i >= 100)
{
_putchar((i / 100) + '0');
_putchar(((i / 10) % 10) + '0');
_putchar((i % 10) + '0');
} 
else if (i >= 10 && i < 100)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
else
_putchar(i + '0');
_putchar('\n');
} 
}
}
}
return;
}
