#include "main.h"
/**
 * _prime - repeated block
 * @i: initialization
 * @m: required number
 * Return: result
 */
int _prime(int i, int m)
{
if (i == (m / 2))
return (1);
if ((m % i) == 0)
return (0);
else
return (_prime(i + 1, m));
}
/**
 * is_prime_number - finds if prime or not
 * @n: number
 * Return: result
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
else
return(_prime(2, n));
}
