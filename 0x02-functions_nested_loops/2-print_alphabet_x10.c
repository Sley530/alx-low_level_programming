#include "main.h"

/**
 * print_alphabet_x10 -Entry point of my code
 *
 * Description: prints the alphabet 10 times.
 *
 * Return: Always return 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i, a;

	for (i = 0; i <= 9; i++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
