#include <stdlib.h>
#include "dog.h"
/**
 * nd - new dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 *
 * Return: a pointer with the new structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;
	int i, new_name, new_owner;

	nd = malloc(sizeof(dog_t));
	if (ndnew_dog == NULL || !name || !owner)
	{
		return (NULL);
	}

	for (new_name = 0 ; name[new_name] ; new_name++)
		;
	for (new_owner = 0 ; owner[new_owner] ; new_owner++)
		;
	nd->name = malloc(new_name + 1);
	nd->owner = malloc(new_owner + 1);

	if (!nd->name || !nd->owner)
	{
		return (NULL);
	}
	for (i = 0 ; i < new_name ; i++)
		nd->name[i] = name[i];
	nd->name[i] = '\0';
	nd->age = age;

	for (i = 0 ; i < new_owner ; i++)
		nd->owner[i] = owner[i];
	nd->owner[i] = '\0';
	return (nd);
}
