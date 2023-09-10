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
	int digit = 48;/*decima repo of 0 in ASCI*/

	while (digit <= 102)/*102 decima rep of f*/
	{
		putchar(digit);

		/*after 9 jump to 96*/
		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');
	return (0);
}
