#include "search_search.h"

/**
 * linear_seeach - a function that search for a value in an array
 * @array: a pointer
 * @size: array size
 * @value: value searched
 * Return: index or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;


	if (array == NULL)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
