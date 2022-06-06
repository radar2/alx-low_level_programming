#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;
	int n;
	int p;

	m = 48;
	n = 49;
	while (m < 57)
	{
		p = n;
		while (p < 58)
		{
			putchar(m);
			putchar(p);
			if ((m != 56 || p != 57))
			{
				putchar(44);
				putchar(32);
			}
			p++;
		}
		m++;
		n++;
	}
	putchar('\n');
	return (0);
}
