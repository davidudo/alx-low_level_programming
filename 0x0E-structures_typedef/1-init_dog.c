#include "dog.h"

/**
 * init_dog - assigns values to struct dog
 * @d: struct dog
 * @name: name to be assigned to dog.name
 * @age: age to be assigned to dog.age
 * @owner: name to be assigned to dog.owner
 *
 * Description: adds values to the struct dog with the
 * corresponding details assigned to it
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
