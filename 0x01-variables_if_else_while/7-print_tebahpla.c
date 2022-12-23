#include <stdio.h>

/**
 * main - Program entry point
 *
 * Description: prints the lowercase alphabets in reverse
 *
 * Return: if return 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; --letter)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
