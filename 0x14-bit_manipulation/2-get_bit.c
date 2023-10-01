#include "main.h"
/**
 * get_bit - gets bit at index
 * @n: number
 * @index: index
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int i;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
n = n >> index;
i = n & 1;
return (i);
}
