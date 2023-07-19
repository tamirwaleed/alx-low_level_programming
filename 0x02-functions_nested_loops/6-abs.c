#include "main.h"
/**
* _abs - gives absolute value
* @n: The number to be checked
*
* Return: 1 if +ve, 0 if 0, -1 if -ve
*/
int _abs(int n)
{
if (n > 0)
return (n);
else if (n < 0)
return (n * -1);
else
return (0);
}
