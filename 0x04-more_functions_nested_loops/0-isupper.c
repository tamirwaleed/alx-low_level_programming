#include "main.h"
/**
 * _isupper - checks for uppercase
 * @n: character to be checked
 * Return: 1 if uppercase, 0 if not
 */
int _isupper(int c)
{
if (c <= 90 && c >= 65)
return (1);
else
return (0);
}
