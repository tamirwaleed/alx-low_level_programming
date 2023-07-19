#include "main.h"
/**
* times_table - prints tables to 9
*/
void times_table(void)
{
int a, b;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
int c;
c = a * b;
if (c >= 10)
{
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
}
else
_putchar(c + '0');
if (b != 9)
{
_putchar(',');
_putchar(' ');
if ((a * (b + 1)) < 10)
_putchar(' ');
}
}
_putchar('\n');
}
return;
}
