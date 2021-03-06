#include "dog.h"
#include <stdio.h>

/**
 *  print_dog - Function that prints a struct dog
 *
 * @d: Name of variable structure.
 *
 * Description: Prints the elements save in dog structure
 * for a particular dog.
 *
 */
void print_dog(struct dog *d)
{

	if (d == NULL)
		return;
	if ((*d).name == NULL)
		(*d).name = "(nil)";
	if ((*d).owner == NULL)
		(*d).owner = "(nil)";

	printf("Name: %s\nAge: %.6f\nOwner: %s\n", (*d).name, (*d).age,
	       (*d).owner);
}
