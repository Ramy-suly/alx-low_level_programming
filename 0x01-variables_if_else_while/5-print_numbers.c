#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all number base 10
 *
 * Return: 0 (sucess)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");
	return (0);
}
