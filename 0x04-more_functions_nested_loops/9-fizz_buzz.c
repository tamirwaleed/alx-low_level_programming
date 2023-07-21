#include <stdio.h>
/**
 * main - entry point
 * Description: FizzBuzz
 * using standard library
 * Returns: Always success 0
 */
int main(void)
{
int i, a, b; 
for (i = 1; i <= 100; i++)
{
a = i % 3;
b = i % 5;
if (a != 0 && b != 0)
printf("%d ", i);
else if (a == 0 && b != 0)
printf("Fizz ");
else if (a != 0 && b == 0)
printf("Buzz ");
else
printf("FizzBuzz ");
}
printf("\n");
return (0);
}
