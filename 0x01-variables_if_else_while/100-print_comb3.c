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

	for (ten = 0; ten <= 9; ten++)
	{
		for (unit = ten + 1; unit <= 9; unit++)
		{
			putchar(ten + '0');
			putchar(unit + '0');

			if (ten < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
