#include "main.h"

/**
 * *_strcat - concatenates two strings.
 * @dest: pointer to destination char
 * @src: pointer to source char
 * @n: number of bytes to receive
 *
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	unsigned int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
	{
		if (j < n)
		{
			*(dest + i) = *(src + j);
			i++;
		}
		j++;
	}
	return (dest);
}
