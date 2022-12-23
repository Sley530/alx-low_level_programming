#include <stdio.h>

/**
 * main - Starting point of the program execution
 *
 * Description: printing of alphabets in lower and uppercase
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
