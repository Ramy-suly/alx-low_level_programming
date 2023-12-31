#include "main.h"

/**
 * *_strcat - Concatenates the string pointed to by @src,including  terminating
 *          null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcat(char *dest, char *src)
{
	int a, a2;

	a = 0;

	while (dest[a])
		a++;

	for (a2 = 0; src[a2] ; a2++)
		dest[a++] = src[a2];

	return (dest);
}
