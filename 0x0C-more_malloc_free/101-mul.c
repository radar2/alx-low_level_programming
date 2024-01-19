#include "main.h"


/**
 * is_digit - Check if a string consists of digits
 * @str: The string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * multiply - Multiply two positive numbers
 * @num1: The first number as a string
 * @num2: The second number as a string
 *
 * Return: The result of the multiplication as a string
 */
char *multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, carry = 0;
	int k;
	int *result;
	char *result_str;

	while (num1[len1] != '\0')
		len1++;

	while (num2[len2] != '\0')
		len2++;

	result = malloc((len1 + len2) * sizeof(int));

	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			int mul = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
			result[i + j + 1] = mul % 10;
			carry = mul / 10;
		}
		result[i + j + 1] = carry;
	}

	// Find the length of the result
	i = 0;
	while (i < len1 + len2 && result[i] == 0)
		i++;

	if (i == len1 + len2)
		return ("0");

	*result_str = malloc((len1 + len2 - i + 1) * sizeof(char));
	k = 0;
	while (i < len1 + len2)
		result_str[k++] = result[i++] + '0';

	result_str[k] = '\0';

	free(result);

	return (result_str);
}

int main(int argc, char *argv[])
{
	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	char *result = multiply(argv[1], argv[2]);
	printf("%s\n", result);
	free(result);

	return (0);
}
