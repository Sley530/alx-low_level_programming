#include "main.h"

/**
 * print_alphabet - program entry point
 *
 * Description: printing the alphabets in lowercase
 *
 * Return: void (no value)
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
