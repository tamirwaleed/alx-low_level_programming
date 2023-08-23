#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - defines
 *@name: of dog
 *@age: of dog
 *@owner: of dog
 * Return: pointer to structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newdog;
int l1, l2;
newdog = malloc(sizeof(dog_t));
if (newdog == NULL)
return (NULL);
l1 = _strlen(name);
l2 = _strlen(owner);
newdog->name = malloc(sizeof(char) * (l1 + 1));
if (newdog->name == NULL)
{
free(newdog);
return (NULL);
}
newdog->owner = malloc(sizeof(char) * (l2 + 1));
if (newdog->owner == NULL)
{
free(newdog);
free(newdog->name);
return (NULL);
}
newdog->age = age;
_strcpy(newdog->name, name);
_strcpy(newdog->owner, owner);
newdog->age = age;
return (newdog);
}
