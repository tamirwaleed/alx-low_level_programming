#include "main.h"
/**
 * tocount - counts string length
 * @s: string
 * Return: lenght
 */
int tocount(char *s)
{
if (*s == '\0')
return (0);
return (1 + tocount(s + 1));
}
/**
 * palindrome_ - repeated
 * @s: string
 * @i: length
 * Return: 1 or 0
 */
int palindrome_(char *s, int i)
{
if (*s != '\0')
{
if (*s != s[tocount(s) - i])
{
return (0);
}
return (palindrome_(s + 1, i + 1));
}
return (1);
}
/**
 * is_palindrome - checks for palindrome
 * @s: string to be checked
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
return (palindrome_(s, 1));
}
