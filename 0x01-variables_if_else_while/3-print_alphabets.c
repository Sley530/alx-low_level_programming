#include <stdio.h>

/**
 * main - Entry point of the code
 *
 * Description: printing of alphebets in lower and uppercase
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{

		putchar(ch);
	}
	putchar('\n');
	return (0);
}
