#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  _calloc - Allocates memory of an array
 *   @nmemb: The number of elements.
 *   @size: The byte size of each array element
 *
 *   Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *   Otherwise - a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		p[i] = '\0';
	}
	return (p);
}
