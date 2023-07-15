#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* Description: prints last integer
* Using different headers
* Return: Always success 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int m;
m = n % 10;
if (m < 6)
{
if (m == 0)
printf("Last digit of %d is %d and is 0\n", n, m);
else
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
}
else
printf("Last digit of %d is %d and is greater than 5\n", n, m);
return (0);
}
