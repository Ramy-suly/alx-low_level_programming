#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the lenght of a prefix substring.
 * @s: type char returns the number of bytes
 * @accept: bytes from accept
 * Return: return x
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int str;
	int a, b, f;

	a = 0;
	while (s[a] != '\0')
	{
		f = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				f = 1;
			}
		}
		b = 0;
		if (f == 0)
			break;
		str++;
		a++;
	}
	return (a);
}
