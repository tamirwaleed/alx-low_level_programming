#include "main.h"
/**
 * factorial - finds factorial
 * @n: integer
 * Return: factorial
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
