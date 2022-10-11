#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 *
 * @name: pointer to the dog's name
 * @age: dog's age
 * @owner: pointer to the dog's owner
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int nl = 0, ol = 0, i;

	while (name[nl] != '\0')
		nl++;
	while (owner[ol] != '\0')
		ol++;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = malloc(sizeof(dog->name) * nl);
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i <= nl; i++)
		dog->name[i] = name[i];
	dog->age = age;
	dog->owner = malloc(sizeof(dog->owner) * ol);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i <= ol; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
