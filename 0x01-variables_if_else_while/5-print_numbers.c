#include <stdio.h>

/**
 * main - Entry point of the code
 *
 * Description: 'prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		printf("%i", digit);
	putchar('\n');
	return (0);
}
