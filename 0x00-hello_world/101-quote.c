#include <stdio.h>
#include <unistd.h>

/** 
 * main - Entry point of code
 * 
 * Description: 'and that piece of art is useful" - Dora Korpar, 2015-10-19'
 * 
 * Return: Always return 0 (Done)
*/

int main()
{
    write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
    return 1;
}