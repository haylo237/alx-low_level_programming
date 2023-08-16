#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - function creates new dog
 * @name: name variable
 * @age: age variable
 * @owner: variable
 * Return: return dog info
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *max_dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		max_dog = malloc(sizeof(dog_t));

		if (max_dog == NULL)
			return (NULL);

		max_dog->name = malloc(sizeof(char) * name_l);

		if (max_dog->name == NULL)
		{
			free(max_dog->name);
			free(max_dog);
			return (NULL);
		}

		max_dog->name = _strcpy(max_dog->name, name)
		max_dog->owner = _strcpy(max_dog->owner, owner)
		max_dog->age = age;
	}

	return (max_dog);
}

/**
 * _strlen - Return string length
 * @s: string to count
 * Return: String length
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0' ; s++)
	{
		c++
	}

	return (c);
}

/**
 * _strcpy - copy a string
 * @dest: destination value
 * @src: source value
 * Return: Destination pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0''

	return (dest);
}
