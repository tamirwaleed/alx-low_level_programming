#include "main.h"
/**
* _islower - checks for lowercase
* @c: The number to be checked
*
* Return: 1 if lowercase, 0 if uppercase
*/
int _islower(int c)
{
if (c <= 122 && c >= 97)
return (1);
else
return (0);
}
