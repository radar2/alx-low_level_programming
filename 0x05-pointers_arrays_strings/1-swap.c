#include "main.h"
/**
 * swap_int - swap values of variables a and b
 * @a: var 1
 * @b: var 2
 */
void swap_int(int *a, int *b)
{
	int a1 = *a;
	int b1 = *b;

	*b = a1;
	*a = b1;
}
