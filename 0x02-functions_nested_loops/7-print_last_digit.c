#include "main.h"
/**
* print_last_digit - prints the last digit
* @n: The number to be checked
*
* Return: last digit
*/
int print_last_digit(int n)
{
int l;
if (n >= 0)
n = n;
else
n = n * -1;
l = n % 10;
_putchar(l + '0');
return (l);
}
