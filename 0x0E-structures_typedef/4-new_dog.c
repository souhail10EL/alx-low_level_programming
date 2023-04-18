#include "dog.h"
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
	int q = 0;

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
	dog_t *new_dog = (dog_t *) malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = (char *) malloc(_strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);

	new_dog->owner = (char *) malloc(_strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		return (NULL);
	}
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
