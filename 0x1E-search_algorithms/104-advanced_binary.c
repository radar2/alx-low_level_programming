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
 * bin_recursive - do binary search w/ recurse
 * @array: passed data
 * @start: of array
 * @end: of array
 * @value: target in search
 * Return: index of value found
 */
int bin_recursive(int *array, size_t start, size_t end, int value)
{
	size_t mid;

	if (start > end)
		return (-1);
	mid = (start + end) / 2;
	arr_progression(array, start, end);
	if (array[mid] == value && array[mid - 1] != value)
		return (mid);
	return (array[mid] < value ?
		bin_recursive(array, mid + 1, end, value) :
		bin_recursive(array, start, mid, value));
}
/**
 * advanced_binary - wraps bin recursive function
 * @array: passed data
 * @size: size of array
 * @value: target
 * Return: index of val
 */
int advanced_binary(int *array, size_t size, int value)
{
	return (!array || !size ? -1 : bin_recursive(array, 0, size - 1, value));
}
