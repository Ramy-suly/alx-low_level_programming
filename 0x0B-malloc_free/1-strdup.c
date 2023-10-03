#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns *p to new alloc spc in mem, contains cp of str as par.
 * @str: type char memory value.
 * Return: Null if fails or if srt is NULL.
 */
char *_strdup(char *str)
{
	unsigned int z, n;
    char *c;

	if (str == NULL)
		return (NULL);

	for (z = 0; str[z] != '\0'; z++)
		;

	c = malloc(z * sizeof(*c) + 1);
	if (c == NULL)
		return (NULL);

	for (n = 0; n < z; n++)
		c[n] = str[n];
	c[n] = '\0';

	return (c);
}
