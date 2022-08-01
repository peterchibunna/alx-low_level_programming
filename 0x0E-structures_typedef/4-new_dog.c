#include <stdlib.h>
#include "dog.h"
#include "_strlen.c"
#include "_strcopy.c"

/**
 * new_dog - Creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: The new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bingo;

	if (name != NULL || !(age < 0) || owner != NULL)
	{
		bingo = malloc(sizeof(dog_t));
		if (bingo == NULL)
			return (NULL);

		bingo->name = malloc(sizeof(char) * (_strlen(name) + 1));
		if (bingo->name == NULL)
		{
			free(bingo);
			return (NULL);
		}

		bingo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
		if (bingo->owner == NULL)
		{
			free(bingo->name);
			free(bingo);
			return (NULL);
		}

		bingo->name = _strcopy(bingo->name, name);
		bingo->age = age;
		bingo->owner = _strcopy(bingo->owner, owner);

		return (bingo);
	}
	else
	{
		return (NULL);
	}
}

