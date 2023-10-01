#include "main.h"
/**
 * set_bit - sets bit at index to 1
 * @n: number
 * @index: index
 * Return: bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int temp = 1;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
temp = temp << index;
*n = *n | temp;
return (1);
}
