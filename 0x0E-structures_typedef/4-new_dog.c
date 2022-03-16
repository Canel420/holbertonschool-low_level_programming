#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - Assign a new dog element.
 *
 * @name: Pointer to name of the dog.
 * @age: Age of the dof in doggy years.
 * @owner: Pointer to careteaker of the dog.
 *
 * Description: Creates a new dog instance.
 *
 * Return: Pointer to new dog.
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;

	nd = malloc(sizeof(dog_t));
	if (name == NULL || owner == NULL)
	{
		free(nd);
		return (NULL);
	}

	(*nd).name = name;
	(*nd).age = age;
	(*nd).owner = owner;
	return (nd);
}
