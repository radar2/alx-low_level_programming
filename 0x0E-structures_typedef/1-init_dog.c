#include "main.h"


/**
 * init_dog -  function that initialize a variable of type struct dog
 * @d: dog
 * @name: name
 * @age: age
 * @owner: Owner
 *
 * return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = malloc(strlen(name) + 1);
		d->owner = malloc(strlen(owner) + 1);
		strcpy(d->name, name);
		d->age = age;
		strcpy(d->owner, owner);
	}
}
