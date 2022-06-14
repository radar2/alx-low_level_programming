#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define SUM 2772
/**
 *
 *
 *
 */
int keygen();
int main()
{
	keygen();
	return (0);
}

int keygen()
{
	int i, n, sum;
	char pass[12];

	i = 0;
	n = 0;
	sum = 0;
	srand(time(NULL));
	while (sum < SUM)
	{
		if (SUM - sum < 48)
			sum -= pass[--i];
		else if (SUM - sum <= 126)
			n = SUM - sum;
		else
			n = rand() % (126 - 48) + 48;
		if (n)
		{
			pass[i++] = n;
			sum += n;
		}
		n = 0;
	}
		
	pass[i] = '\0';
	printf("%s\n", pass);
	return (0);
}	
