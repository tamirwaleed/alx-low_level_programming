#include <stdio.h>
/**
* main - Entry point
* Description: prints alphabets in reverse
* Using different headers
* Return: Always success 0
*/
int main(void)
{
int c;
for (c = 'z'; c >= 'a'; c--)
putchar(c);
putchar('\n');
return (0);
}
