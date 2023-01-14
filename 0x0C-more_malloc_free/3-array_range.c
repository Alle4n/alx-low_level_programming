#include "main.h"
#include <stdio>
#include <stdlib>

/**
 * array_range - a function that creates an array of integers.
 * @min : int
 * @max : int
 *
 * Return: pointer to array of integer
 */

int *array_range(int min, int max)
{
	int *a, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	a = malloc(sizeof(int) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = min++;

	return (a);
}
