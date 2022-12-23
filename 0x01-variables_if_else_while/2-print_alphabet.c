#include <stdio.h>

/**
 * main - Starting point of the program execution
 *
 * Description: This will prints alphabetic characters
 *
 * Return Value - 0 if successful
 *
 */

int main(void)
{
	char letter = 'a';

	while(letter <= 'z')
	{
		putchar(letter);
		letter++;
		continue;
		putchar('\n');
	}

	return (0);
}
