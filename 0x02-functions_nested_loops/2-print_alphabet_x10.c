#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int count, ch;
	count = 0;

	while (count < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
	}
	count++;
	_putchar('\n');
}
