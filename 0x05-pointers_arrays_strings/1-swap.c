#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: Integer a
 * @b: Integer b
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
