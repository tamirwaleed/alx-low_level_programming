#include "main.h"
/**
 * _isdigit - checks for integer
 * @c: integer to be checked
 * Return: 1 if digit, 0 if not
 */
int _isdigit(int c)
{
if (c <= 57 && c >= 48)
return (1);
else
return (0);
}
