#include "main.h"
#include <stdlib.h>
/**
* _exp2 - raises to power
* @power: power
* Return: result
*/
unsigned int _exp2(unsigned int power)
{
unsigned int i, r = 1;
if (power == 0)
return (1);
for (i = 1; i <= power; i++)
{
r = r * 2;
}
return (r);
}
/**
* binary_to_uint - converts to decimal
* @b: binary integer
* Return: decimal
*/
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int d = 0, power = 0, u;
if (b == NULL)
return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != 48 && b[i] != 49)
return (0);
}
i--;
while (i >= 0)
{
if (b[i] == 48)
u = 0;
else
u = 1;
d = d + (_exp2(power) * u);
power++;
i--;
}
return (d);
}
