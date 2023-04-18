#include "dog.h"
char *_strcopy(char *des, char *src)
{
	int q;

	for (q = 0; src[q]; q++)
		des[q] = src[q];
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
	new_dog->name = (char *) malloc(strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_strcopy(new_dog->name, name);

	new_dog->owner = (char *) malloc(strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		return (NULL);
	}
	_strcopy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
char *_strcopy(char *des, char *src);
