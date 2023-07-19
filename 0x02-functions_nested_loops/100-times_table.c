#include "main.h"
#include <stdio.h>
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
printf("%d%d%d", (i / 100), ((i / 10) % 10), (i % 10));
else if (i >= 10 && i < 100)
printf("%d%d", (i / 10), (i % 10));
else
printf("%d\n", i);
_putchar(',');
if ((a * (b + 1)) < 10)
printf("   ");
else if ((a * (b + 1)) >= 10 && (a * (b + 1)) < 100)
printf("  ");
else
printf(" ");
}
else
{
if (i >= 100)
printf("%d%d%d", (i / 100), ((i / 10) % 10), (i % 10));
else if (i >= 10 && i < 100)
printf("%d%d", (i / 10), (i % 10));
else
printf("%d\n", i);
}
}
}
}
return;
}
