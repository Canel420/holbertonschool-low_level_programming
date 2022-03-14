#ifndef STRUCTS_H
#define STRUCTS_H

/**
 * struct dog - Cointains dogs characteristics
 *
 * @name: Name of the dog.
 * @age: Age of dog in dog years.
 * @owner: Caretaker of the dog.
 *
 * Description: Database of dogs
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* STRUCTS_H */
