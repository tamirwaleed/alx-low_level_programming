#include "main.h"
/**
 * swap_int - swaps
 * @a: 1st integer
 * @b: 2nd integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
int i, j;
i = *a;
j = *b;
*a = j;
*b = i;
return;
}
