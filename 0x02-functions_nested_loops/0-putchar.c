#include <stdio.h>
/**
* main - Entry point
* Description: prints putchar
* Using different headers
* Return: Always success 0
*/
int main(void)
{
char charstring[50] = "_putchar\n";
for (int i = 0; i <= 50; i++)
putchar(charstring[i]);
return (0);
}
