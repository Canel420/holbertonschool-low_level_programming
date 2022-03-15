#include "dog.h"
#include <stdlib.h>

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
	/* dog_t is a user (me) created data type */
	dog_t *nd;
	int n_len = 0, o_len = 0, i, j;
	char *n2, *o2;

	if (name == NULL || owner == NULL)
		return (NULL);
	/* Measure length of name and owner for copies */
	while (name[n_len])
		n_len++;
	while (owner[len_owner])
		o_len++;

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
		return (NULL);
	/* Lets make the copies */
	n2 = malloc(n_len + 1);
	if (n2 == NULL)
		return (NULL);
	for (i = 0 ; name[i] ; i++)
		n2[i] = name[i];
	n2[i] = '\0';

	o2 = malloc(o_len + 1);
	if (o2 == NULL)
		return (NULL);
	for (j = 0 ; owner[j] ; j++)
		o2[j] = owner[j];
	o2[i] = '\0';

	/* Assign the copied names into new dog */
	(*nd).name = n2;
	(*nd).age = age;
	(*nd).owner = o2;
	return (nd);
}
