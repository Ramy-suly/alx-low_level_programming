#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print all alphapet letters in capital and small
 *
 * Return: 0(success)
*/

int main(void)
{

	char ch = 'a';
	char CH = 'A';

	/*print lowercase a-z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*print uppercase A-Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}

