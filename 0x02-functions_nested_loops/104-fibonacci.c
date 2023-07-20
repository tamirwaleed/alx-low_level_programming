#include <stdio.h>
/**
* main - Entry Point
* Description: finds 98 fibonacci
* using stdio.h
* Return: Always success 0
*/
int main(void)
{
unsigned long i, a, b, c;
a = 0;
b = 1;
for (i = 1; i <= 98; i++)
{
c = a + b;
if (i != 98)
printf("%lu, ", c);
else
printf("%lu\n", c);
a = b;
b = c;
}
return (0);
}
