#include <stdio.h>

/**
 * main - Entry point of the code
 *
 * Description: prints the lowercase alphabets in reverse
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');

	return (0);
}
