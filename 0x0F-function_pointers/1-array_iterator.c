#include <stdlib.h>
#include "function_pointers.h"
/**
  * array_iterator - function that prints a name.
  * @array: pointers to int
  * @size: size of array
  * @action: Pointer of a function
  * Return: Nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
