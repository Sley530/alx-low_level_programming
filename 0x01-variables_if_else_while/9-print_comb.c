#include <stdio.h>

/**
 * main - Entry point of the code
 *
 * Description: prints all possible combinations of single-digit numbers
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');
		if (number < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
