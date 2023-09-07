#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A c program that count a size of byte for var
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	printf("size of a char: %u byte(s) \n", sizeof(char));
	printf("size of an int: %u byte(s) \n", sizeof(int));
	printf("size of a long int: %u byte(s) \n", sizeof(long int));
	printf("size of along long int: %u byte(s) \n", sizeof(long long int));
	printf("size of a floot: %u byte(s) \n", sizeof(float));
	return (0);
}
