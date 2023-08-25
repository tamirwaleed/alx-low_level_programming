#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints
 * @separator: what separates the numbers
 * @n: number of integers
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
va_start(ap, n);
if (n == 0)
return;
for (i = 0; i < n; i++)
{
if (i != n - 1)
{
printf("%i", va_arg(ap, int));
if (separator != NULL)
printf("%s", separator);
else
printf("%s", va_arg(ap, char *));
}
else
printf("%i", va_arg(ap, int));
}
printf("\n");
va_end(ap);
return;
}
