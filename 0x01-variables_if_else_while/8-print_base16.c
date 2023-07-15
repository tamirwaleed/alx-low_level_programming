#include <stdio.h>
/**
* main - Entry point
* Description: prints base16
* Using different headers
* Return: Always success 0
*/
int main(void)
{
int c;
for (c = 0; c <= 9; c++)
putchar(c + '0');
for (c = 'a'; c <= 'f'; c++)
putchar(c);
putchar('\n');
return (0);
}
