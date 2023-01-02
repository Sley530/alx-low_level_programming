#include <stdio.h>

/**
 * main - Program entry point
 *
 * Description: prints all possible combinations of single-digit numbers
 *
 * Return: if return 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; ++num)
	{
		putchar(num + '0');
		if (number < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
