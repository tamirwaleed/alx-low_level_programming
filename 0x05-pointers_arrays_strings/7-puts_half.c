#include "main.h"
/**
 * puts_half - prints
 * @str: string to be typed
 * Return: void
 */
void puts_half(char *str)
{
int i, half, j = 0;
for (i = 0 ; str[i] != '\0'; i++)
j++;
if (j % 2 == 0)
half = j / 2;
else
half = 1 + (j / 2);
for (i = half ; str[i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');
return;
}
