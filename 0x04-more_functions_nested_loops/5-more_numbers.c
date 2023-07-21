#include "main.h"
/**
 * more_numbers - prints from 0 to 14 ten times
 * Return: void
 */
void more_numbers(void)
{
int i, j, x, y;
for (i = 1; i <= 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j <= 9)
_putchar(j + '0'); 
else
{
for (x = 0; x <= 1; x++)
{
if (x == 0)
y = j / 10;
else 
y = j  % 10;
_putchar(y + '0');
}
}      
}
_putchar('\n');
}
return;
}
