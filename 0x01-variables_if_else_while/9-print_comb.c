#include <stdio.h>
/**
* main - Entry point
* Description: prints combinations
* Using different headers
* Return: Always success 0
*/
int main(void)
{
int c;
for (c = 0; c <= 9; c++)
{
putchar(c + '0');
if (c < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
