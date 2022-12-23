#include <stdio.h>

/**
 * main - Starting point of the program execution
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: if return 0 (Success)
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		printf("%d", digit);
	}

	putchar('\n');

	return (0);
}
