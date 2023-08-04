#include <stdio.h>
/**
 * _atoi - converts
 * @s: string
* Return: converted integer
 */
int _atoi(char *s)
{
int i = 0, j, k = 1, power = 1;
for (j = 0; s[j] != '\0'; j++)
{
if (s[j] >= '0' && s[j] <= '9')
power = 10 * power;
if (s[j] == '-')
k = k * -1; 
}
power = power / 10;
for (j = 0; s[j] != '\0'; j++)
{
if (s[j] >= '0' && s[j] <= '9')
{
i = i + ((s[j] - '0') * power);
power = power / 10;
}
}
i = i * k;
if (i != 0)
return (i);
else
return (0);
}
/**
 * main - multiplies
 * @argc: number
 * @argv: arguments
 * Return: 0 or 1
*/
int main(int argc, char *argv[])
{
	int result;
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	result = _atoi(argv[1]) * _atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
