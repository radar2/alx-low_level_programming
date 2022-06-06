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
	int r;
	int p;
	int q;
	int k;

	m = 48;
	n = 49;
	r = 50;
	while (m < 56)
	{
		p = n;
		k = r;
		while (p < 57)
		{
			q = k;
			while (q < 58)
			{
				putchar(m);
				putchar(p);
				putchar(q);
				if ((m != 55 || p != 56 || q != 57))
				{
					putchar(44);
					putchar(32);
				}
				q++;
			}
			p++;
			k++;
		}
		m++;
		n++;
		r++;
	}
	putchar('\n');
	return (0);
}
