#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: dog to initialize
 * @name: dog name
 * @age: cat age
 * @owner: the psycho himself
 * Return: nothin
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
