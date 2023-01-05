#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolation_search - search using interpolation probing
 * @array: to search
 * @size: size of arr
 * @value: target
 * Return: index of target
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos = 0, low = 0, hi = size - 1;

	if (!array || size == 0)
		return (-1);

	while (low < hi)
	{
		pos = low +
			(((double)(hi - low) / (array[hi] - array[low])) * (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			hi = pos - 1;
		else
			low = pos + 1;
	}
	return (-1);

}
