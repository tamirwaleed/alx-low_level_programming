#include <stdio.h>
/**
* main - Entry point
* Description: prints alphabets except q and e
* Using different headers
* Return: Always success 0
*/
int main(void)
{
int c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
putchar(c);
else
{
}
}
putchar('\n');
return (0);
}
