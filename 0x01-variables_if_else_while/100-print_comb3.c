#include <stdio.h>

/**
 * main - Program entry point
 *
 * Description: prints all possible different combinations of two digits
 *
 * Return: if return 0 (Success)
 */

int main(void)
{
	int ten;
	int unit;

	for (tens = 0; tens <= 9; tens++)
	{
		for (ones = tens + 1; ones <= 9; ones++)
		{
			putchar(tens + '0');
			putchar(ones + '0');
			if (tens < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
