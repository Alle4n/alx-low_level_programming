#include "main.h"

/**
 * *_strcat - concatenates two strings.
 * @dest: pointer to destination char
 * @src: pointer to source char
 *
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
