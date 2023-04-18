#include "dog.h"

/**
 * init_dog - Prints out the information of poppy
 * @d: Pointer
 * @name: Pointer to Name of dog
 * @age: Age of dog
 * @owner: Pointer to Owner's name of dog
 * Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
