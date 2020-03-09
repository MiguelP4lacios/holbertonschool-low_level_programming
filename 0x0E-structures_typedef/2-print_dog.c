#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * init_dog - itialize a variable of type struct dog
  * @d: pointer to struct dog
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  * Return: Nothing
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		(*d).name = "(nil)";
	if (d->owner == NULL)
		(*d).owner = "(nil)";
	printf ("Name: %s\nAge: %f\nOwner: %s\n",(*d).name, (*d).age, (*d).owner);

}
