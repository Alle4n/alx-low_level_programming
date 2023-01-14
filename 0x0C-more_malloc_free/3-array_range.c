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
	int *a
	int i, j = 0;

	if (min > max)
		return (NULL);

	a = malloc((max - min + 1) * sizeof(int));

	if (a == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		a[j] = i;
		j++;

	return (a);
}
