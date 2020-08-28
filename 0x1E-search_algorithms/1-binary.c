#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted
 * array of integers using the Binary search algorithm.
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: The number index found otherwise -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	l = 0;
	r = size - 1;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i == r)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		i = l + (r - l) / 2;
		if (array[i] < value)
			l = i + 1;
		else if (array[i] > value)
			r = i - 1;
		else
			return (i);
	}
	return (-1);
}
