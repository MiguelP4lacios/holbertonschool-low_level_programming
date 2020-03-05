#include <stdlib.h>
/**
  * _realloc - reallocates a memory block using malloc and free.
  * @ptr: string
  * @old_size:is the size, in bytes, of the allocated space for ptr
  * @new_size:is the new size, in bytes of the new memory block
  * Return: ()
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	new_p = malloc(new_size);
	if (new_p == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		for (i = 0; (i < old_size) && (i < new_size); i++)
			new_p[i] = ((char *) ptr)[i];
		free(ptr);
	}
	return (new_p);
}
