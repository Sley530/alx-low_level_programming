#include <stdio.h>

/**
 * main - Entry point of the code
 *
 * Description: printing the lowercase of the alphabets except q and e
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
