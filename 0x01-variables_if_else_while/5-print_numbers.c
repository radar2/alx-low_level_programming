#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;

	m = 0;
	while (m < 10)
	{
		printf("%d", m);
		m++;	
	}
	putchar('\n');
	return (0);
}
