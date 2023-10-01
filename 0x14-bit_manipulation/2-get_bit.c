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
n = n >> index;
i = n & 1;
return (i);
}
