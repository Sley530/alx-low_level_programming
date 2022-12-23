#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Starting point of the program execution
 *
 * Description: Prints a random number and determines if the last digit is
 * greater than 6, equal to 0, or less than 6
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, (n % 10));
	}

	else if ((n % 10) == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, (n % 10));
	}

	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		 n, (n % 10));
	}

	return (0);
}
