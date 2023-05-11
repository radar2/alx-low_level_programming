#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - algorith for linear search in c
 * @array: int array we search
 * @size: size of array passed
 * @value: value to search
 * Return: first index value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		++i;
	}
	return (-1);
}
