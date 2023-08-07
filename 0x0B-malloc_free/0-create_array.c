#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates array
 * @size: size of array
 * @c: initial
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i;
s = malloc(sizeof(char) * size);
if (size == 0)
return ('\0');
else
{
for (i = 0; i != size; i++)
s[i] = c;
return (s);
}
}
