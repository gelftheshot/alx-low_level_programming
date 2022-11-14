#include "dog.h"
#include <stdlib.h>

/**
*init_dog - is func to init ele
*@d - str of dog
*@name: name
*@age: age of the dog
*@owner: the owner
*Description: it is the structure of dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
