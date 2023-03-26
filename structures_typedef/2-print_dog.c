#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - A function that print a struct
 * @d: is an input struct
 * Return: if the name is NULL print (nil) or show the struct elements
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if(d->name == NULL)
		d->name = "(nil)";
	if(d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
