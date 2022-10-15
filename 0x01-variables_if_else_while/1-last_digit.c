#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-program entry point.
 *
 * Return:0 if no error, non zero value if error.
 */
int mail(void)
{
	int n;
	int ldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	idigit = n % 10;
	if (idigit > 5)
	{
		printf("Last digit of %d id %d and is greater than 5\n" , n, ldigit);
	}
	else if (ldgit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ldigit);
	}
	else if (ldit < 6 && idigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldigit);
	}
	return (0);
}
