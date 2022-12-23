#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Starting point of the program execution.
 *
 * Description: Prints a random value, 
 * and determines if it is positive, negative or zero.
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
