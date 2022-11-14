#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
*cpy - copy str
*@word: is the  word to be copid
*Return: the copied string
*/

char *cpy(char *word)
{
	int i = 0;
	char *ptr;

	if (word == NULL)
		return (NULL);
	while (word[i] != '\0')
		i++;
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; word[i] != '\0'; i++)
		ptr[i] = word[i];
	ptr[i] = '\0';
	return (ptr);
}

/**
*new_dog - function that will creat new dog
*@name: the new dog
*@age: the new age
*@owner: the new owner
*Return: the new dog_t
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *rooky;
	char *newname, *newowner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	rooky = malloc(sizeof(dog_t));
	if (rooky == NULL)
		return (NULL);
	newname = cpy(name);
	if (newname == NULL)
	{
		free(rooky);
		return (NULL);
	}
	rooky->name = newname;
	rooky->age = age;
	newowner = cpy(owner);
	if (newowner == NULL)
	{
		free(rooky);
		return (NULL);
	}
	rooky->owner = newowner;
	return (rooky);
}
