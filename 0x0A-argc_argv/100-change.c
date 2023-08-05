#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns cents
 * @argc: number
 * @argv: arguments
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
int cents = atoi(argv[1]), change = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
if (cents <= 0)
{
printf("0\n");
return (0);
}
while (cents > 0)
{
while (cents >= 25)
{
change = change + cents / 25;
cents = cents % 25;
}
while (cents >= 10)
{
change = change + cents / 10;
cents = cents % 10;
}
while (cents >= 5)
{
change = change + cents / 5;
cents = cents % 5;
}
while (cents >= 2)
{
change = change + cents / 2;
cents = cents % 2;
}
while (cents >= 1)
{
change = change + cents / 1;
cents = cents % 1;
}
}
printf("%d\n", change);
return (0);
}
