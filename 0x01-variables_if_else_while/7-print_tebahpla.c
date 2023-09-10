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
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
