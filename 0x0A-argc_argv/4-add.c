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
	int i, sum = 0;

	if (argc < 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
