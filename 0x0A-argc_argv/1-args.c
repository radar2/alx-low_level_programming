#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that print th number of argument
 * @argc: the size of argv
 * @argv: array of argument
 * Return: Always 0 (Success)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (EXIT_SUCCESS);
}
