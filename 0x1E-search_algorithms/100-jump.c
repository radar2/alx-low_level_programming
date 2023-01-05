#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * min - get lesser of two values
 * @a: val 1
 * @b: val 2
 * Return: lessr of two values
 */
int min(int a, int b)
{
	return (a < b ? a : b);
}
/**
 * jump_search - search through array as set blocks
 * @array: array to search through
 * @size: size of array
 * @value: search target
 * Return: index of value
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t i;

	if (!array || size == 0)
		return (-1);

	for (i = 0; i < size && array[i] < value; i += jump)
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

	printf("Value found between indexes [%lu] and [%lu]\n", i - jump, i);

	for (i = i - jump; i < size && array[i] <= value; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
