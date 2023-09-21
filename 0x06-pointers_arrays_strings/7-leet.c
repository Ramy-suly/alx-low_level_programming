#include "main.h"

/**
 * leet - transform to leet
 * @s: char array string type
 * Return: s transformed
 */

char *leet(char *s)
{
	int d, f;
	char s1[] = "aeotl";
	char S1[] = "AEOTL";
	char s2[] = "43071";

	for (d = 0; s[d] != '\0'; d++)
	{
		for (f = 0; f < 5; f++)
		{
			if (s[d] == s1[f] || s[d] == S1[f])
			{
				s[d] = s2[d];
				break;
			}
		}
	}
	return (s);
}
