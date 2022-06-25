#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc: the size of argv
 * @argv: array of argument
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, res;

	res = 1;
	if (argc != 3)
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}
	else
	{
		for (i = 1; i < argc; i++)
			res = res * atoi(argv[i]);
		printf("%d\n", res);
	}
	return (EXIT_SUCCESS);
}
