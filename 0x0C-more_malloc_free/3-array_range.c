#include "main.h"


/**
 * array_range - Create an array of integers from min to max
 * @min: The minimum value (included)
 * @max: The maximum value (included)
 *
 * Return: A pointer to the newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr;
	size_t size, i;

	if (min > max)
	{
		return (NULL);
	}

	size = (size_t)(max - min + 1);
	arr = malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + (int)i;
	}

	return (arr);
}
