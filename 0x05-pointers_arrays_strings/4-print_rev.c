#include "main.h"
/**
 * print_rev - reverses
 * @s: string to be typed
 * Return: void
 */
void print_rev(char *s)
{
int i, j = 0;
for (i = 0; s[i] != '\0'; i++)
j++;
for (i = j; i >= 0; i--)
_putchar(s[i]);
_putchar('\0');
_putchar('\n');
return;
}
