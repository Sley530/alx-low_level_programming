#include "main.h"

/**
 * main - Program entry point
 *
 * Return: if return 0 (Success)
 */

int main(void)
{
	int i;
	char v[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(v[i]);
	}

	_putchar('\n');
	return (0);
}
