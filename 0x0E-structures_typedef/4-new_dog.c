#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Function that creates a new dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owenr of dog
 *
 * Return: pointer to new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nn, oo, a;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (nn = 0; name[nn]; nn++)
		;
	nn++;
	dog.name = malloc(nn * sizeof(char));
	if (dog.name == NULL)
	{
		free(dog);
		retun(NULL);
	}
	for (a = 0, a < nn; a++)
		dog.name[a] = name[a];
	dog.age = age;
	for (oo = 0; owner[oo]; oo++)
		;
	oo++;
	dog.owner = malloc(oo * sizeof(char));
	if (dog.owner == NULL)
	{
		free(dog.name);
		free(dog);
		return (NULL);
	}
	for (a = 0; a < oo; a++)
		dog.owner[a] = owner[a];
	return (dog);
}
