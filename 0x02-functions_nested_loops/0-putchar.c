#include "main.h"
/**
* main - Entry point
* Description: prints putchar
* Using defined headers
* Return: Always success 0
*/
int main(void)
{
char charstring[50] = "_putchar\n";
int i;
for (i = 0; i <= 50; i++)
_putchar(charstring[i]);
return (0);
}
