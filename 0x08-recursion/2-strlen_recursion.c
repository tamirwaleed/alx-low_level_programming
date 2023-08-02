#include "main.h"
/**
 * _puts_rev_recursion - prints in reverse
 * @s: to be printed
 * Return: void
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
