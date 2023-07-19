#include <stdio.h>
/**
* main - Entry Point
* Description: finds multiples of 3 and 5
* using stdio.h
* Return: Always success 0 
*/
int main(void)
{
int i, a, b, sum;
sum = 0;
for (i = 3; i < 1024; i++)
if ((i % 3) == 0 || (i % 5) == 0)
sum = sum + i;
printf("%d\n", sum);
return (0);
}
