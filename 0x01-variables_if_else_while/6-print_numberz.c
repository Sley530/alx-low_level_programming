#include <stdio.h>

/**
 * main - Program starting point of execution
 *
 * Description: print all single digit numbers of base 10 starting from 0
 *
 * Return: if return 0 (Success)
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; ++digit)
	{
		putchar(digit + '0');
	}

	putchar('\n');

	return (0);
}
