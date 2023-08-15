#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialises a variable with type dog
 * @d: pointer to dog type
 * @name: name member
 * @age: age member
 * @owner: owner member
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
