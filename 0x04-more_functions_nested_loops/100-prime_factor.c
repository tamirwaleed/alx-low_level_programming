#include <stdio.h>
/**
* main - entry point
* Description: finds the largest prime factor
* using standard lib
* Return: 0
*/
int main(void)
{
long int large, i, j, prime;
for (i = 2; i <= 612852475143 / 2; i++)
{
if (612852475143 % i == 0)
{
prime = 1;
for (j = 2; j <= i / 2; j++)
{
if (i % j == 0)
{
prime = 0;
break;
}
}
if (prime == 1)
large = i;
}
}
printf("%lu\n", large);
return (0);
}
