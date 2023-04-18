#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - function knowing the len
 * @s: pointer string
 * Return: len
 */
int _strlen(const char *s)
{
	int len = 0;
	while (*s++)
		len++;
	return (len);
}

/**
 * _strcpy - function that copies
 * @des: destination
 * @dep: src to be take
 * Return: des
 */
char *_strcpy(char *des, char *dep)
{
	int q;

	for (q = 0; dep[q]; q++)
		des[q] = dep[q];
	des[q] = '\0';

	return (des);
}

/**
 * new_dog - add new dog
 * @name: name of the new dog
 * @age: of new dog
 * @owner: of the dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len_na = _strlen(name);
	int len_ow = _strlen(owner);
	int e;
	int r;

	new_dog = (dog_t *) malloc(sizeof(dog_t));

	if (!name || age < 0 || !owner)
	{
		return (NULL);
	}
	new_dog = (dog_t *) malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*new_dog).name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*new_dog).owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (e = 0; e < len_na; e++)
	{
		new_dog->name[e] = name[e];
	}
	new_dog->name[e] = '\0';

	for (r = 0; r < len_ow; r++)
	{
		new_dog->owner[r] = owner[r];
	}
	new_dog->owner[r] = '\0';
	new_dog->age = age;

	return (new_dog);
}
