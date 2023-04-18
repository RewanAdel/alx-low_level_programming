#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: struct type dog
 * @name: pointer to char dog's name
 * @age: pointer to char dog's age
 * @owner: pointer to char dog's owner
 *
 * Return: Nothing
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
