#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - initialize dog structure
 * @d: structure of dog to initialize
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: 0
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
