#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print all alphapet letters
 *
 * Return: 0(success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*conert digit to ASCII represntation*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');
	return (0);
}
