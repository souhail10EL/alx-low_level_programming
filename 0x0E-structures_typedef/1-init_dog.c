#include "dog.h"
/**
 * init_dog - structure initialize
 * @d: pointer to dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: void
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
