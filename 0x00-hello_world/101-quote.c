#include <unistd.h>
/**
*main - Entry point
*Description: writes required string not using puts or printf
*using unistd
*Return: Always success 1
*/
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
