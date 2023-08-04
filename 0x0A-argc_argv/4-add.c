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
i = i *k;
if (i != 0)
return (i);
else
return (0);
}
/**
 * main - add
 * @argc: number
 * @argv: arguments
 * Return: 0 or 1
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;
	
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < argc; i++)
	{
		if (_atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		sum += _atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
