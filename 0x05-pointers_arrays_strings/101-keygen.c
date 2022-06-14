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
//	char letter;
//	char capLetter;

	i = 0;
	n = 0;
	sum = 0;
	srand(time(NULL));
	/*for (i = 0; i < ; i++)
   	{
                pass[i] = rand() % 9;
                capLetter = 'A' + (rand() % 26);
		pass[i + 2] = capLetter;
		letter = 'a' + (rand() % 26);
		pass[i + 3] = letter;
	        printf("%d%c%c", pass[i], pass[i + 2], pass[i + 3]);
	}*/
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
	
