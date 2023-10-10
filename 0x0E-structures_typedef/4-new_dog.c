#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: pointer to a string
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

/**
 * *_strcpy - copies the string pointed to by 'src', including the terminating
 * null byte (\0), to the buffer pointed to by dest
 * @dest: pointer to the string to be copied to
 * @src: pointer to the string to be copied from
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * *new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog owner
 *
 * * Return: pointer to struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	len = _strlen(name);
	new_dog->name = malloc(sizeof(len + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);
	
	len = _strlen(owner);
	new_dog->owner = malloc(sizeof(len + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->owner, owner);

	new_dog->age = age;
	return (new_dog);
}
