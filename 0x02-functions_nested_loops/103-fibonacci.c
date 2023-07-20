#include <stdio.h>
/**
* main - Entry Point
* Description: finds even fibonacci
* using stdio.h
* Return: Always success 0
*/
int main(void)
{
unsigned long i, a, b, c, e;
a = 0;
b = 1;
c = 1;
e = 0;
for (i = 1; c < 4000000; i++)
{
c = a + b;
if ((c % 2) == 0)
e = e + c;
a = b;
b = c;
}
printf("%lu\n", e);
return (0);
}
