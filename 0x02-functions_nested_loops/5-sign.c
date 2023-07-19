#include "main.h"
/**
* print_sign - checks for sign
* @n: The number to be checked
*
* Return: 1 if +ve, 0 if 0, -1 if -ve
*/
int print_sign(int n)
{
if (n > 1)
{
_putchar('+');
return (1);
}
else if (n < 1)
{
_putchar('-');
return (-1);
}
else
{
_putchar(0  + '0');
return (0);
}
}
