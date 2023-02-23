#include "main.h"
/**
 * print_times_table - Print the `n` times table, starting with 0
 * @n: input
 * Description: If `n` is greater than 15 or less than 0, print nothing
 */
void print_times_table(int n)
{
	int x,y;
	int z = 0;

	if (n <= 15 && n >= 0)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y;
				if (z > 99)
				{
					_putchar(z / 100 + '0');
					_putchar((z / 10 % 10) + '0');
					_putchar((z / 10 % 10) + '0');
				}
				else if (z > 9)
				{
					_putchar(' ');
					_putchar(z / 10 + '0');
					_putchar(z % 10 + '0');
				}
				else if (y != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(z + '0');
				}
				else
					_putchar(z + '0');

				if (y != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}

