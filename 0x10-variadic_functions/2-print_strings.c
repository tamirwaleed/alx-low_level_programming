#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: what separates the numbers
 * @n: number of strings
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *s;
va_start(ap, n);
for (i = 0; i < n; i++)
{
s = va_arg(ap, char *);
if (s != NULL)
printf("%s", s);
else
printf("(nil)");
if (i != n - 1)
{
if (separator != NULL)
printf("%s", separator);
}
}
printf("\n");
va_end(ap);
return;
}
