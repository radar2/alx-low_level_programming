#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * arr_progression - print how we split through array
 * @a: array we parse
 * @start: start of array (left most, least in order)
 * @end: higher end of the array
 * Return: void
 */
void arr_progression(int *a, size_t start, size_t end)
{
	printf("Searching in array: ");
	while (start <= end)
	{
		if (start == end)
			printf("%d\n", a[start]);
		else
			printf("%d, ", a[start]);
		++start;
	}
}

/**
 * binary_search - algorithm in c
 * @array: array to search
 * @size: size of array
 * @value: value to search
 *
 * Return: index if found else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start, mid, end;

	start = 0;
	end = size - 1;

	if (!array)
		return (-1);

	while (start <= end)
	{
		arr_progression(array, start, end);
		mid = (start + end) / 2;
		if (array[mid] < value)
			start = mid + 1;
		else if (array[mid] > value)
			end = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
