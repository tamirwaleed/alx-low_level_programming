#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - converts from binary
 * @b: to be converted
 * Return: unsigned decimal or 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int d = 0, i;
if (b == NULL)
return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != 48 && b[i] != 49)
return (0);
else if (b[i] == 48)
d = d << 1;
else
{
d = d << 1;
d++;
}
}
return (d);
}
