#include "main.h"


/**
 * main - Entry point of the program
 * @argc: The number of arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc  __attribute__((unused)), char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return 1;
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);
}
