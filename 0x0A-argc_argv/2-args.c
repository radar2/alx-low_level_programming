#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that print all argument
 * @argc: the size of argv
 * @argv: array of argument
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (EXIT_SUCCESS);
}
