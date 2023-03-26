#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - a function that creates a new dog
 * @name: an input string that has the name
 * @age: an input float number that represents the age
 * @owner: an input string that has the owner's name
 * Return: NULL if fails or a pointer to the new structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cname, *cowner;
	int len_name = 0, len_owner = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[len_name])
		len_name++;

	while (owner[len_owner])
		len_owner++;
	
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	cname = malloc(len_name + 1);
	if (cname == NULL)
		return (NULL);

	for (i = 0; name[i]; i++)
		cname[i] = name[i];
	cname[i] = '\0';

	cowner = malloc(len_owner + 1);
	if (cowner == NULL)
		return (NULL);

	for (i = 0; owner[i]; i++)
		cowner[i] = owner[i];
	cowner[i] = '\0';

	new_dog->name = cname;
	new_dog->age = age;
	new_dog->owner = cowner;
	return (new_dog);
}

