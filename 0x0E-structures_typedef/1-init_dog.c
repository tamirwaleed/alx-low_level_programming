#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes
 *@d: dog
 *@name: name
 *@age: age
 *@owner: owner
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
	d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
return;
}
