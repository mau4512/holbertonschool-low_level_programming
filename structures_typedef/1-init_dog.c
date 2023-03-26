#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - A fuction that initialize a variable of type struct dog
 * @d: is the struct
 * @name: is the input string character where is the name of the dog
 * @age: is input float age
 * @owner: is the input string where is owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
