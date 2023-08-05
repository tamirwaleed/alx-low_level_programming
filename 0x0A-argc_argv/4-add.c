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
else if (s[j] < '0' && s[j] > '9' && s[j] != '-')
return (0);
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
	int sum, num, i, j, k;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		num = _atoi(argv[k]);
		if (num >= 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);
	return (0);
}
