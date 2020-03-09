#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
int str_len(char *s);
/**
  * new_dog - function that creates a new dog
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  * Return: n_dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
	{
		return (NULL);
	}
	(*n_dog).name = malloc(str_len(name) * sizeof(char));
	if ((*n_dog).name == NULL)
	{
		free((*n_dog).name);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		(*n_dog).name[i] = name[i];
	(*n_dog).name[i] = '\0';
	(*n_dog).age = age;
	(*n_dog).owner = malloc(str_len(owner) * sizeof(char));
	if ((*n_dog).owner == NULL)
	{
		free((*n_dog).name);
		free((*n_dog).owner);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
		(*n_dog).owner[i] = owner[i];
	(*n_dog).owner[i] = '\0';
	return (n_dog);

}
/**
  * str_len - size de un string
  * @s: string
  * Return:len
  */
int str_len(char *s)
{
	int len = 0;

	while (s[len++])
		continue;
	return (len);
}
