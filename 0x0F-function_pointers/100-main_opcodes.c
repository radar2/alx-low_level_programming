#include <stdio.h>
#include <stdlib.h>


/**
 * print_opcodes - FUnction
 * @num_bytes: Argus
 *
 * Return: void
 */
void print_opcodes(int num_bytes)
{
	for (int i = 0; i < num_bytes; i++)
	{
		printf("%02x", ((unsigned char *)print_opcodes)[i]);
	}

	printf("\n");
}
