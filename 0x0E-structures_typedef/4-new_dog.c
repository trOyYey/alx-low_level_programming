#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - function that gets a lenght of a string
 * @str: string
 * Return: lenght of str
 */

int _strlen(const char *str)
{
	int lenght = 0;

	while (*str++)
		lenght++;
	return (lenght);
}

/**
 * _strcopy - function that returns @dest with a cop of a string from @src
 * @src: string
 * @dest: copy of the string
 * Return: @dest
 */
char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}}}


/**
 * *new_dog - function that creates a new cat
 * @name: cat name
 * @age: cat age
 * @owner: cat owner
 * Return: Null if fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
