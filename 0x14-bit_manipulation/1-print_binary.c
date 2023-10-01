#include "main.h"

/**
 * print_binary - converts to binary
 * @n: number to be converted
 * Return: void
*/
void print_binary(unsigned long int n)
{
int i, j, k = 1, temp;
temp = n;
for (i = 0; temp > 0; i++)
{
temp >>= 1;
}
if (i > 0)
i--;
for (j = i; j >= 0; j--)
{
k <<= j;
if (n >= (long unsigned int)k)
{
_putchar('0' + 1);
n = n - k;
}
else
_putchar('0' + 0);
k = 1;
}
return;
}
