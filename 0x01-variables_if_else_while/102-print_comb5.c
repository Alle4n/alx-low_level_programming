#include <stdio.h>
/**
 * main - entry point
 * Description: prints combinations of 2 two-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				for (d = 0; d < 10; d++)
				{
					if (!((a == b) && (b == c) && (c == d)))
					{
						putchar(48 + a);
						putchar(48 + b);
						putchar(' ');
						putchar(48 + c);
						putchar(48 + d);
						putchar(44);
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
