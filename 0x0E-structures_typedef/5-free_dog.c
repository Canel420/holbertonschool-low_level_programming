#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Function that frees dogs
 *
 * @d: Dog to free.
 *
 * Description: free the memory reserved for dog
 * characteristics.
 *
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
