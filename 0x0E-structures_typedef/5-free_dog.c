#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees
 *@d: to be freed
 * Return: null
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
freee(d);
}
return;
}
