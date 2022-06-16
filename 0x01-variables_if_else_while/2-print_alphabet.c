#include <stdio.h>

/**
 * main - Entry point of the code
 *
 * Description: 'a program that prints the alphabet in lowercase
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
