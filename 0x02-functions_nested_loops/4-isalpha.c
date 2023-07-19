#include "main.h"
/**
* _isalpha - checks for alphabet
* @c: The number to be checked
*
* Return: 1 if alphabet, 0 if otherwise
*/
int _isalpha(int c)
{
if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97))
return (1);
else
return (0);
}
