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
int cents, i, change = 0;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
for (i = 0; i <= 4 && cents >= 0; i++)
{
while (cents >= coins[i])
{
change = change + cents / coins[i];
cents = cents % coins[i];
}
}
printf("%d\n", change);
return (0);
}
