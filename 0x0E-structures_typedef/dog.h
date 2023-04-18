#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Poppy details
 *@name: Name of Poppy
 *@age: Age of Poppy
 *@owner: Owner of Poppy
 *
 * Description: This struct takes the name, age and owner's name
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
