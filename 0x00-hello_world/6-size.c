#include <stdio.h>

/**
 * main - Starting point for the program execution
 *
 * Description: prints the size of various types on a computer
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	char character_var;
	int integer_var;
	long long_var;
	long long longlong_var;
	float float_var;

	printf("Size of a char: %d byte(s)\n", sizeof(character_var));
	printf("Size of an int: %d byte(s)\n", sizeof(integer_var));
	printf("Size of a long int: %d byte(s)\n", sizeof(long_var));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longlong_var));
	printf("Size of a float: %d byte(s)\n", sizeof(float_var));

	return (0);
}
