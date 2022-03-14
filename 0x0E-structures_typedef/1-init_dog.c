#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Function that initialize a variable of type struct dog.
 *
 * @d: Name of variable.
 * @name: Name of the dog
 * @age: Age of the dog in dog years.
 * @owner: Caretaker of dog.
 *
 * Description: Initialize dog database.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
