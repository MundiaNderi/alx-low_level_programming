#include <stdlib.h>
#include "dog.h"

/**
* free_dog - frees dogs.
* @d: the struxture to free.
* Return: nothing
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
