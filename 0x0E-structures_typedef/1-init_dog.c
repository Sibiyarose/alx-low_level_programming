#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initialiaes a dog structure
 * @d: A dog stucture
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
