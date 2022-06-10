#include <stdio.h>


/** 
 * main - Entry point of the code
 * 
 * Description: Printing the size of various types on a computer
 * 
 * Return: Always return 0 (success)
*/

int main ()
{
    char v_char;
    int v_int;
    long v_long;
    long long v_longlong;
    float v_float;

    printf("Hello");
    printf("Size of a char: %lu byte(s)\n", sizeof(v_char));
    printf("Size of an int: %lu byte(s)\n", sizeof(v_int));
    printf("Size of a long int: %lu byte(s)\n", sizeof(v_long));
    printf("Size of a long long int: %lu byte(s)\n", sizeof(v_longlong));
    printf("Size of a float: %lu byte(s)\n", sizeof(v_float));

    return 0;
}