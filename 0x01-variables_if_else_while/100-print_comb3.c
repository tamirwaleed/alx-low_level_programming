#include <stdio.h>
/**
* main - Entry point
* Description: prints combinations
* Using different headers
* Return: Always success 0
*/
int main(void)
{
int a;
int b;
for (a = 0; a <= 9; a++)
{
for (b = a + 1; b <= 9; b++)
{
putchar(a + '0');
putchar (b + '0');
if (a != 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
