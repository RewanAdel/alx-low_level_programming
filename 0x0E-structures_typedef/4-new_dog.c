#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - create a new dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: new dog info
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int x = 0, y = 0, z;
	dog_t *dogee;

	while (name[x] != '\0')
		x++;
	while (owner[y] != '\0')
		y++;
	dogee = malloc(sizeof(dog_t));
	if (dogee == NULL)
	{
		free(dogee);
		return (NULL);
	}
	dogee->name = malloc(x * sizeof(dogee->name));
	if (dogee->name == NULL)
	{
		free(dogee->name);
		free(dogee);
		return (NULL);
	}
	for (z = 0; z <= x; z++)
		dogee->name[z] = name[z];
	dogee->age = age;
	dogee->owner = malloc(y * sizeof(dogee->owner));
	if (dogee->owner == NULL)
	{
		free(dogee->owner);
		free(dogee->name);
		free(dogee);
		return (NULL);
	}
	for (z = 0; z <= y; z++)
		dogee->owner[z] = owner[z];
	return (dogee);
}
