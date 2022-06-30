#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - a function that allocctes memory using malloc
 * @b: Input
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
