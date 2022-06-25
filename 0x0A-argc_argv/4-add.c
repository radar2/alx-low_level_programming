#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that positives numbers
 * @argc: the size of argv
 * @argv: array of argument
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, res;

	res = 0;
	if (argc < 1)
	{
		return (EXIT_SUCCESS);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (EXIT_FAILURE);
			}
			res = res + atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	return (EXIT_SUCCESS);
}
