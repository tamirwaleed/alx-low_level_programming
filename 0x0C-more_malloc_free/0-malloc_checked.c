#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates
 * @b: bytes
 * Return: pointer or NULL
 */
void *malloc_checked(unsigned int b)
{
int *s;
s = malloc(b);
if (s == NULL)
exit(98);
return (s);
}
