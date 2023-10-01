#include "main.h"
/**
 * flip_bits - number to be flipped
 * @n: first
 * @m: second
 * Return: no. of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int i = 0;
unsigned long int k;
k = m ^ n;
while (k > 0)
{
if (k & 1)
i++;
k = k >> 1;
}
return (i);
}
