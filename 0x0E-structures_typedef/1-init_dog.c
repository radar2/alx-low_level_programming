#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct
 * @d: Input
 * @name: Input
 * @age: Inpur
 * @owner: Input
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
			return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
