#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * len - Measures the length of a string.
 *
 * @s: Pointer to string to measure.
 *
 * Description: Recursive count of characters in a
 * string.
 *
 * Return: Number of characters.
 */

int len(char *s)
{
	if (!s || !*s)
		return (0);
	return (1 + len(s + 1));
}

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
	int n_len, o_len, i, j;
	char *n2, *o2;

	if (name == NULL || owner == NULL)
		return (NULL);
	/* Measure length of name and owner for copies */
	n_len = len(name) + 1;
	o_len = len(owner) + 1;
	printf("%d, %d ", n_len, o_len);

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
		return (NULL);
	/* Lets make the copies */
	n2 = malloc(sizeof(char) * n_len);
	if (n2 == NULL)
		return (NULL);
	for (i = 0 ; name[i] ; i++)
		n2[i] = name[i];
	n2[i] = '\0';
	printf("%s ", n2);

	o2 = malloc(sizeof(char) * o_len);
	if (o2 == NULL)
		return (NULL);
	for (j = 0 ; owner[j] ; j++)
		o2[j] = owner[j];
	o2[i] = '\0';
	printf("%s ", o2);

	/* Assign the copied names into new dog */
	(*nd).name = n2;
	(*nd).age = age;
	(*nd).owner = o2;
	return (nd);
}
