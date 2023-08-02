#include "main.h"
/**
 * sqroot - repeated block
 * @i: initialization
 * @m: required root
 * Return: result
 */
int sqroot(int i, int m)
{
if (i > m)
return (-1);
else if (i * i == m)
return (i);
else
return (sqroot(i + 1, m));
}
/**
 * _sqrt_recursion - finds sqrt
 * @n: base
 * Return: result
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
return (sqroot(1, n));
}

