#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure alias to dog
 * @name: pounter to dog s name
 * @age: age of the dog
 * @owner: pointer to dog s owner
 *
 * Description: information about the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
